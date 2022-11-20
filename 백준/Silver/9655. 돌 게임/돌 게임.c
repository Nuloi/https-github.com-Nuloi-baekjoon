#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n % 4 == 0 || n % 4 == 2 || n == 2) {
		printf("CY");
		return 0;
	}
	else{
		printf("SK");
		return 0;
	}

}