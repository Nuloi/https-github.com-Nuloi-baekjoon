A = input()
B = input()
a = len(A)
b = len(B)

DP = [[0] * (b + 1) for _ in range(a + 1)]

for i in range(1, a + 1):
    for j in range(1, b + 1):
        if A[i - 1] == B[j - 1]:
            DP[i][j] = DP[i - 1][j - 1] + 1
        else:
            DP[i][j] = max(DP[i][j - 1], DP[i - 1][j])

lcs = DP[a][b]

print(lcs)
