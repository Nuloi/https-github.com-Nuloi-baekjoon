#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}
int minimum(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	int dp[100002];
	for (int i = 0; i < 100002; i++)
	{
		dp[i] = 2147483640;
	}
	int a, b;
	int* c;
	scanf("%d %d", &a, &b);
	c = (int*)calloc(a, sizeof(int*));
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &c[i]);
	}
	qsort(c, a, sizeof(c[0]), compare);
	for (int i = 0; i < a; i++)
		dp[c[i]] = 1;
	for (int i = c[0]; i < 100002; i++)
	{
		if (dp[i - c[0]] != 2147483640 && dp[i] == 2147483640) dp[i] = dp[i - c[0]] + 1;
		for (int j = 1; j < a; j++)
		{
			if (i - c[j] >= 0 && dp[i - c[j]] != 2147483640) dp[i] = minimum(dp[i], dp[i - c[j]] + 1);
		}
	}
	if (dp[b] == 2147483640)
	{
		printf("-1");
		return 0;
	}
	printf("%d", dp[b]);
	free(c);
}
