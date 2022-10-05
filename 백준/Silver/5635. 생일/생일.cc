#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct student
{
	int dd, mm, yy;
	char name[101];
} STUDENT;

int main() {
	int n;
	scanf("%d", &n);
	STUDENT as[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", as[i].name, &as[i].dd, &as[i].mm, &as[i].yy);
	}
	int high = 0, low = 0;
	for (int i = 1; i < n; i++)
	{
		if (as[high].yy <= as[i].yy)
		{
			if (as[high].yy < as[i].yy)
			{
				high = i;
			}
			else if (as[high].yy == as[i].yy)
			{
				if (as[high].mm == as[i].mm) {
					if (as[high].dd < as[i].dd) {
						high = i;
					}
				}
				else if (as[high].mm < as[i].mm)
				{
					high = i;
				}
			}
		}
		else if (as[low].yy >= as[i].yy)
		{
			if (as[low].yy > as[i].yy)
			{
				low = i;
			}
			else if (as[low].yy == as[i].yy)
			{
				if (as[low].mm == as[i].mm) {
					if (as[low].dd > as[i].dd) {
						low = i;
					}
				}
				else if (as[low].mm > as[i].mm)
				{
					low = i;
				}
			}
		}
	}
	printf("%s\n%s", as[high].name, as[low].name);
}