#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int num = 0;
	int count = 0;

	while (count != n)
	{
		num++;
		int temp = num;

		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				count++;
				break;
			}
			else temp /= 10;
		}
	}
	printf("%d", num);
}