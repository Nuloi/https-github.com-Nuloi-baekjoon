#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, count = 0;
	scanf("%d", &a);
	if (a <= 1 || a == 3) { printf("-1"); return 0; }
	else if (a % 5 == 0) { count = a / 5; }
	else{
		while (a % 5 != 0){
			a -= 2;
			count++;
		}
		count += a / 5;
	}
	printf("%d", count);
}