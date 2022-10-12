#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long fpow(long long a, long long b, long long c) {
	if (b==0)
	{
		return 1;
	}
	if (b==1)
	{
		return a % c;
	}
	long long temp = fpow(a, b / 2, c);
	if (b%2==0)
	{
		return temp * temp % c;
	}
	else
	{
		return temp % c * temp % c * a % c % c;
	}
}

int main() {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", fpow(a, b, c));
}