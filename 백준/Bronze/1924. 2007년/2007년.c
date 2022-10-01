#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	int day = 0;
	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			day += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			day += 30;
		}
		else if (i == 2)
		{
			day += 28;
		}
	}
	day += y + 1;
	if (day % 7==0)
	{
		printf("SAT");
	}
	else if (day % 7 == 1)
	{
		printf("SUN");
	}
	else if (day % 7 == 2)
	{
		printf("MON");
	}
	else if (day % 7 == 3)
	{
		printf("TUE");
	}
	else if (day % 7 == 4)
	{
		printf("WED");
	}
	else if (day % 7 == 5)
	{
		printf("THU");
	}
	else if (day % 7 == 6)
	{
		printf("FRI");
	}
	return 0;
}