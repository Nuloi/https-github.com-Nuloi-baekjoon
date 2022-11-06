#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		long long l[101];
		l[0] = 0;
		l[1] = 1;
		l[2] = 1; 
		int b;
		scanf("%d", &b);
		for (int j = 3; j <= b; j++)
		{
			l[j] = l[j - 2] + l[j - 3];
		}
		printf("%lld\n", l[b]);
	}
}