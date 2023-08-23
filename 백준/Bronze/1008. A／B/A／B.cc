#include<stdio.h>

int main()
{
	float a, b;
	scanf("%d%d", &a, &b);
	printf("%.9f", (double)a / b);
}