#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return -1;
	}
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
}

int main() {
	int z;
	scanf("%d", &z);
	int dota[z];
	for (int i = 0; i < z; i++)
	{
		scanf("%d", &dota[i]);
	}
	qsort(dota, sizeof(dota) / sizeof(int), sizeof(int), compare);
	printf("%d", dota[0] * dota[z - 1]);
}