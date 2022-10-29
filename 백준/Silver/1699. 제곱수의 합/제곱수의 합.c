#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int Closest_Sqrt(int temp)
{
    int a = 1;
    while (a * a <= temp)
    {
        a++;
    }

    return  a - 1;
}

int min(int a, int b) {
    if (a <= b) {
        return a;

    }
    else {
        return b;

    }
}

int main()
{
    int n, m, result;
    int dp[1000001];
    scanf("%d", &n);
    m = Closest_Sqrt(n);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = i;
    }
    result = n;

    for (int i = 2; i <= m; i++) {
        int temp = i * i;
        for (int j = 1; j <= n; j++) {
            if (j < temp) {
                continue;
            }
            else {
                dp[j] = min(dp[j], 1 + dp[j - temp]);
            }
        }
    }

    printf("%d", dp[n]);



}