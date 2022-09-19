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
	int a[8], b[8], max = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	qsort(b, sizeof(b) / sizeof(int), sizeof(int), compare);
	for (int i = 7; i > 2; i--)
	{
		max += b[i];
	}
	int count[5],d=0;
	for (int i = 0; i < 8; i++)
	{
		if (b[3]<=a[i]) {
			count[d] = i + 1;
			d++;
		}
	}
	printf("%d\n", max);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", count[i]);
	}
}