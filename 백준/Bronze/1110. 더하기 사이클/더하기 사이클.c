#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int data;
	scanf("%d", &data);
	int num[100], dume = 0, count = 0;
	if (data<=9)
	{
		num[0] = data;
		num[1] = (data * 10) + data;
		count++;
	}
	else
	{
		num[0] = data;
	}
	int da;
	while (data != dume)
	{
		if (num[count] > 9)
		{
			da = (num[count] / 10 + num[count] % 10);
			if (da > 9)
			{
				da = da % 10;
			}
		}
		else
		{
			da = num[count];
		}
		dume = (num[count] % 10 * 10 + da);
		count++;
		num[count] = dume;
	}
	printf("%d", count);
}