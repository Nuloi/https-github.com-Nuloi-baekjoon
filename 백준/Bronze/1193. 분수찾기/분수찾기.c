#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int dex = 0;
	if (a==1)
	{
		printf("1/1");
	}
	else
	{
		for (int i = 1; i <= 10000000; i++)
		{
			dex += i;
			if (dex >= a) {
				int num;
				num = dex - a;
				if (i % 2 == 0)
				{
					printf("%d/%d", i - num, num + 1);
				}
				else
				{
					printf("%d/%d", num + 1, i - num);
				}
				break;
			}
		}
	}
}