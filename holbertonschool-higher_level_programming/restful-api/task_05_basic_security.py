#!/usr/bin/python3

"""
API Security and Authentication Techniques
"""
from flask import Flask, jsonify, request
from werkzeug.security import generate_password_hash, check_password_hash
from flask_jwt_extended import JWTManager, create_access_token
from flask_jwt_extended import jwt_required, get_jwt
from flask_httpauth import HTTPBasicAuth

# Create a Flask application
app = Flask(__name__)

# Initialize HTTPBasicAuth
auth = HTTPBasicAuth()

# Setup the Flask-JWT-Extended extension
app.config["JWT_SECRET_KEY"] = "super-secret"
jwt = JWTManager(app)

# User dictionary for tests :
users = {
    "user1": {"username": "user1",
              "password": generate_password_hash("password"),
              "role": "user"},
    "admin1": {"username": "admin1",
               "password": generate_password_hash("password"),
               "role": "admin"}
}


# Password verification function
@auth.verify_password
def verify_password(username, password):
    if username in users and check_password_hash(
            users[username]['password'], password):
        return username
    return None


# Protected route with Basic Auth
@app.route("/basic-protected", methods=["GET"])
@auth.login_required
def get_status():
    """
    get_status
    """
    return jsonify({"msg": "Basic Auth: Access Granted"})


# Admin only route
@app.route("/admin-only")
@jwt_required()
def admin_only():
    current_user = get_jwt()
    if current_user.get("role") != "admin":
        return jsonify({"error": "Admin access required"}), 403
    return jsonify({"msg": "Admin Access: Granted"}), 200


# Login to generate a JWT Token
@app.route("/login", methods=["POST"])
def login():
    """
    login
    """
    retrieved_data = request.get_json()
    username = retrieved_data.get("username")
    password = retrieved_data.get("password")

    # Check credential and return a valid JWT token
    if username in users and check_password_hash(
            users[username]["password"], password):
        access_token = create_access_token(
            identity=username,
            additional_claims={"role": users[username]["role"]}
        )
        return jsonify(access_token=access_token), 200

    # otherwise always return 401
    return jsonify({"msg": "Bad username or password"}), 401


# JWT protected route
@app.route("/jwt-protected")
@jwt_required()
def protected():
    """
    Protected route to jwt-protected
    """
    return "JWT Auth: Access Granted"


# Custom error handler for JWT errors
@jwt.unauthorized_loader
def handle_unauthorized_error(err):
    return jsonify({"error": "Missing or invalid token"}), 401


@jwt.invalid_token_loader
def handle_invalid_token_error(err):
    return jsonify({"error": "Invalid token"}), 401


@jwt.expired_token_loader
def handle_expired_token_error(err):
    return jsonify({"error": "Token has expired"}), 401


@jwt.revoked_token_loader
def handle_revoked_token_error(err):
    return jsonify({"error": "Token has been revoked"}), 401


@jwt.needs_fresh_token_loader
def handle_needs_fresh_token_error(err):
    return jsonify({"error": "Fresh token required"}), 401


if __name__ == "__main__":
    app.run(debug=True)
