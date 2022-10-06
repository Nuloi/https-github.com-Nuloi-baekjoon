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
	int a;
	scanf("%d", &a);
	int b[a], time = 0;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	qsort(b, sizeof(b) / sizeof(int), sizeof(int), compare);
	int dtime = 0;
	for (int i = 0; i < a; i++)
	{
		dtime += b[i];
		time += dtime;
	}
	printf("%d", time);
}