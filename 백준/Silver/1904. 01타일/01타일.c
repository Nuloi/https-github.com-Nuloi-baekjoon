#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int da[1000001];
	da[1] = 1;
	da[2] = 2;
	int a;
	scanf("%d", &a);
	for (int i = 3; i <= a; i++)
	{
		da[i] = (da[i - 1] + da[i - 2]) % 15746;
	}
	printf("%d", da[a]);
}