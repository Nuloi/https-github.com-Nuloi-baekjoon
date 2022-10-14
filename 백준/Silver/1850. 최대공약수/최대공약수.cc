#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	long long a, b, t = 0;
	scanf("%lld%lld", &a, &b);
	long long a1 = a, b1 = b;
	long long c;
	if (a < b); //큰숫자 정렬
	{
		a = b1;
		b = a1;
	}
	while (t == 0) {
		if (a % b == 0)
		{
			c = b;
			t = 1;
		}
		else
		{
			c = a % b;
			a = b;
			b = c;
		}
	}
	for (long long i = 0; i < c; i++)
	{

		printf("1");
	}
}