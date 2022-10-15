#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct room {
	int s;
	int e;
} room;

int compare(const void* a, const void* b) {
	room num1 = *(room*)a;
	room num2 = *(room*)b;
	if (num1.e > num2.e)
	{
		return 1;
	}
	else if (num1.e == num2.e)
	{
		if (num1.s > num2.s)
		{
			return 1;
		}
		else {
			return -1;
		}
	}
	return -1;
}

int main() {
	int a, lowe = 25;
	scanf("%d", &a);
	room z[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &z[i].s, &z[i].e);
	}
	qsort(z, a, sizeof(room), compare);
	int k = 0, count = 1;
	for (int i = 1; i < a; i++)
	{
		if (z[k].e <= z[i].s) {
			count++;
			k = i;
		}
	}
	printf("%d", count);
}