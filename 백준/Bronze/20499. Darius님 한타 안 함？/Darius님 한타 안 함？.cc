#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int K, D, A;
    scanf("%d/%d/%d", &K, &D, &A);
	if (D == 0 || K + A < D)
	{
		printf("hasu");
	}
	else
	{
		printf("gosu");
	}
}