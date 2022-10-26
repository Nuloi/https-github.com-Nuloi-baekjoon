#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //난수 
#include <math.h>
#define max(a,b) (a) > (b) ? (a) : (b)


int dp[1500001];
int T[1500001];
int M[1500001];
int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d %d", &T[i], &M[i]);
	}
	for (int i = N; i >= 1; i--)
	{
		if (i + T[i] > N + 1)
		{
			dp[i] = dp[i + 1];
		}
		else
		{
			dp[i] = max(dp[i + 1], M[i] + dp[T[i] + i]);
		}
	}
	printf("%d", dp[1]);
}
