#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	int cnum = 0;
	for (int i = 1; i < num; i++)
	{
		int as,c = 0;
		as = i;
		while (as != 0)
		{
			c = as % 10 + c;
			as /= 10;
		}
		if (num==i+c)
		{
			cnum = i;
			break;
		}
	}
	printf("%d", cnum);
}
