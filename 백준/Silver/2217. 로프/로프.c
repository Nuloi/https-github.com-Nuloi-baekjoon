#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2)
		return 1;
	if (num1 > num2)
		return -1;
	return 0;
}

int main()
{
	int n, max = 0, count = 1, dmax = 0;
	scanf("%d", &n);
	int ar[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &ar[i]);
	}
	qsort(ar, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		dmax = ar[i] * count;
		count++;
		if (max < dmax){
			max = dmax;
		}
	}
	printf("%d", max);
}