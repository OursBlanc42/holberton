#!/usr/bin/env python3

def print_board(board):
    """
    Print the current state of the board.
    """
    for row in board:
        print(" | ".join(row))
        print("-" * 5)


def check_winner(board):
    """
    Check if there is a winner on the board.

    Returns:
    str: The winner ("X" or "O") if there is one, otherwise None.
    """
    # Check rows
    for row in board:
        if row.count(row[0]) == len(row) and row[0] != " ":
            return row[0]

    # Check columns
    for col in range(len(board[0])):
        if (board[0][col] == board[1][col] == board[2][col] and
                board[0][col] != " "):
            return board[0][col]

    # Check diagonals
    if board[0][0] == board[1][1] == board[2][2] and board[0][0] != " ":
        return board[0][0]

    if board[0][2] == board[1][1] == board[2][0] and board[0][2] != " ":
        return board[0][2]

    return None


def is_board_full(board):
    """
    Check if the board is full.

    Returns:
    bool: True if the board is full, otherwise False.
    """
    for row in board:
        if " " in row:
            return False
    return True


def tic_tac_toe():
    """
    Main function to play the Tic-Tac-Toe game.
    """
    board = [[" "]*3 for _ in range(3)]
    player = "X"
    while True:
        print_board(board)
        try:
            row = int(input("Enter row (0, 1, or 2) for player "
                            + player + ": "))
            col = int(input("Enter column (0, 1, or 2) for player "
                            + player + ": "))
            if not (0 <= row < 3 and 0 <= col < 3):
                print("Invalid input. Row and column must be between 0 and 2.")
                continue
        except ValueError:
            print("Invalid input. Please enter numeric values.")
            continue

        if board[row][col] == " ":
            board[row][col] = player
            winner = check_winner(board)
            if winner:
                print_board(board)
                print("Player " + winner + " wins!")
                break
            elif is_board_full(board):
                print_board(board)
                print("It's a tie!")
                break
            player = "O" if player == "X" else "X"
        else:
            print("That spot is already taken! Try again.")


if __name__ == "__main__":
    tic_tac_toe()
