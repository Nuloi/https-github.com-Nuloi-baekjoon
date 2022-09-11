#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _COORD {
	int x;
	int y;
} COORD;

int compare(const void* a, const void* b) {
	COORD num1 = *(COORD*)a;
	COORD num2 = *(COORD*)b;
	if (num1.x > num2.x)
	{
		return 1;
	}
	else if (num1.x == num2.x)
	{
		if (num1.y > num2.y)
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
	int z;
	scanf("%d", &z);
	COORD data[z];
	for (int i = 0; i < z; i++)
	{
		scanf("%d %d", &data[i].x, &data[i].y);
	}
	qsort(data, z, sizeof(COORD), compare);
	for (int i = 0; i < z; i++)
	{
		printf("%d %d\n", data[i].x, data[i].y);
	}
}