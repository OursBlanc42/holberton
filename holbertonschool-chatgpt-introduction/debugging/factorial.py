#!/usr/bin/python3
import sys

def factorial(n):
    result = 1
    while n > 1:
        result *= n
        n -= 1  # Correction: décrémenter n pour éviter une boucle infinie
    return result

if len(sys.argv) != 2:
    print("Usage: ./factoriel <number>")
    sys.exit(1)

try:
    number = int(sys.argv[1])
    if number < 0:
        raise ValueError("Le nombre doit être positif.")
    f = factorial(number)
    print(f)
except ValueError as e:
    print(f"Erreur: {e}")
    sys.exit(1)