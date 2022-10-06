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
	int n, m = 0;
	scanf("%d", &n);
	int l[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &l[i]);
	}
	int i = 0;
	qsort(l, sizeof(l) / sizeof(int), sizeof(int), compare);

	while (m < n - 1)
	{
		m += l[i++];
		n--;
	}
	if (m == n - 1)
	{
		printf("%d", m);
	}
	else
	{
		n++;
		while (m != n - 1)
		{
			m--;
		}
		printf("%d", m);
	}
}