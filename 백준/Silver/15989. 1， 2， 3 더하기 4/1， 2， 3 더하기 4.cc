#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int a;
	scanf("%d", &a);
	int b;
	int c[4] = { 0,1,2,3 };
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		int dp[10002] = { 0 };
		dp[0] = 1;
		for (int i = 1; i <= 3; i++)
		{
			for (int j = c[i]; j <= b; j++)
			{
				dp[j] += dp[j - c[i]];
			}
		}
		printf("%d\n", dp[b]);
	}
}