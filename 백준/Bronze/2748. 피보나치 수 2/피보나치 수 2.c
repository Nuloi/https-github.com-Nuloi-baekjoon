#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int pibonachi(int a) {

	if (a == 1 || a == 0 || a == 2)
	{
		return 1;
	}
	long long b = 1;
	long long c = 1;
	long long d = 0;
	for (int i = 0; i < a - 2; i++)
	{
		d = b + c;
		b = c;
		c = d;
	}
	return d;
}

int main() {
	long long b;
	scanf("%lld", &b);
	printf("%lld", pibonachi(b));
}