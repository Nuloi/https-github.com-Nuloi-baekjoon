n = int(input())
a = list(map(int, input().split()))

dp = [-1] * n 
dp[0] = 0

for i in range(1, n):
    for j in range(i):
        if j + a[j] >= i and dp[j] != -1:
            if dp[i] == -1 or dp[i] > dp[j] + 1: 
                dp[i] = dp[j] + 1

print(dp[n-1])
