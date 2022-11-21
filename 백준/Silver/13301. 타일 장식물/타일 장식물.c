#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	long long* dp = (long long*)malloc(sizeof(long long) * n+1);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	printf("%lld", (dp[n] * 2) +((dp[n] + dp[n - 1]) * 2));
	free(dp);
}
