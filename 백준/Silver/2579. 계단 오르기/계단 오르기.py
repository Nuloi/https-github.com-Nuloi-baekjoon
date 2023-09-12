n = int(input())
s = [0] + [int(input()) for _ in range(n)]

dp = [0] * (n + 1)
dp[1] = s[1]
if n > 1:
    dp[2] = s[1] + s[2]

for i in range(3, n+1):
    dp[i] = max(dp[i-3] + s[i-1] + s[i], dp[i-2] + s[i])

print(dp[n])
