#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c[101];
	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &c[i]);
	}
	int dp[10001] = { 0 };
	dp[0] = 1;
	for (int i = 1; i <= a; i++)
	{
		for (int j = c[i]; j <= b; j++)
		{
			dp[j] += dp[j - c[i]];
		}
	}
	printf("%d", dp[b]);
}