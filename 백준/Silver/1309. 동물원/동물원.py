N =int(input())
dp = [0,3,7]

if N>2:
    for i in range(2, N):
        dp.append((2 * dp[i] + dp[i-1]) % 9901)
    print(dp[N])

else:
    print(dp[N])