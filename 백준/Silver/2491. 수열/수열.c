#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a==1)
	{
		printf("1");
	}
	else
	{
		int num[a], c = a - 1;
		int count[2] = { 0 }, max = 0;
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < a-1; i++)
		{
			if (num[i] <= num[i+1])
			{
				count[0]++;
			}
			else
			{
				count[0] = 0;
			}

			if (num[c] <= num[c - 1])
			{
				count[1]++;
			}
			else
			{
				count[1] = 0;
			}

			if (max<count[0])
			{
				max = count[0];
			}
			if (max<count[1])
			{
				max = count[1];
			}
			c--;
		}
		printf("%d", max+1);
	}
}