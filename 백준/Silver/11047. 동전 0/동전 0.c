#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	int a, c;
	scanf("%d %d", &a, &c);
	int b[a];
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = a-1; i >= 0; i--)
	{
		if (c==0)
		{
			break;
		}
		if (c / b[i] > 0) {
			count += c / b[i];
			c = c % b[i];
		}
	}
	printf("%d", count);
}