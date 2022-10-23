#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return 1;
	}
	if (num1 > num2)
	{
		return -1;
	}
	return 0;
}

int main() {
	int z, player;
	scanf("%d", &z);
	if (z == 1)
	{
		printf("Yes");
		return 0;
	}int enemy[z - 1];
	scanf("%d", &player);
	long long add = player;
	for (int i = 0; i < z - 1; i++)
	{
		scanf("%d", &enemy[i]);
		add += enemy[i];
	}
	qsort(enemy, sizeof(enemy) / sizeof(int), sizeof(int), compare);
	for (int i = 0; i < z - 1; i++)
	{
		add -= enemy[i];
		if (add <= enemy[i])
		{
			printf("No");
			return 0;
		}
	}
	printf("Yes");
}