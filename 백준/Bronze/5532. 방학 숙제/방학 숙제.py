inputs = [int(input()) for _ in range(5)]
L, A, B, C, D = inputs
korean = -(-A // C)
math = -(-B // D)

days = L - max(korean, math)

print(days)
