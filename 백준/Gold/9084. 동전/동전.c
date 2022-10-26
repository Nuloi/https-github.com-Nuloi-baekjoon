#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++)
	{
		int max[10001] = { 0 };
		max[0] = 1;
		int coin[21];
		int a;
		scanf("%d", &a);
		for (int i = 1; i <= a; i++)
		{
			scanf("%d", &coin[i]);
		}
		int b;
		scanf("%d", &b);
		for (int i = 1; i <= a; i++)
		{
			for (int j = coin[i]; j <= b; j++)
			{
				max[j] += max[j - coin[i]];
			}
		}
		printf("%d\n", max[b]);
	}
}
