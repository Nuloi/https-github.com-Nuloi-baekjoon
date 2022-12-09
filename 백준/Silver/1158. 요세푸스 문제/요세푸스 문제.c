#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j, N, K, cnt, idx;

	scanf("%d %d", &N, &K);

	int* table = (int*)calloc(N, sizeof(int));

	for (i = 0; i < N; i++)
	{
		table[i] = i + 1;
	}

	printf("<%d", table[K - 1]);
	table[K - 1] = -1;

	for (i = 0, idx = K; i < N - 1; i++)
	{
		cnt = 0; j = -1;
		while (cnt < K) 
		{
			j += 1;
			if (table[(idx + j) % N] != -1)
				cnt += 1;
		}
		idx = (idx + j) % N; 
		printf(", %d", table[idx]);
		table[idx] = -1;
	}
	printf(">");
	return 0;
}