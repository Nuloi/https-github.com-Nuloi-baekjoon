n=int(input())
dp=[0,1]
for i in range(2, n+1):
    mvel=9999999
    j = 1

    while (j**2) <= i:
        mvel = min(mvel, dp[i - (j**2)])
        j += 1

    dp.append(mvel + 1)
print(dp[n])