#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>

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

int main(void) {
	int a[9], max = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		max += a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		int l = 0;
		for (int j = 0; j < 9; j++)
		{
			if (a[i] != a[j] && max == a[i] + a[j] + 100)
			{
				a[i] = 0;
				a[j] = 0;
				l = 1;
				break;
			}
		}
		if (l==1)
		{
			break;
		}
	}
	qsort(a, 9, sizeof(int), compare);
	for (int i = 2; i < 9; i++)
	{
		printf("%d\n", a[i]);
	}
}