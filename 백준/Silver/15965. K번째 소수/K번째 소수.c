#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void aro(int num) {
	
}
int	main(void) {
	int number = 10000000;
	int* a = (int*)malloc(sizeof(int) * 10000001);
	int num;
	scanf("%d", &num); for (int i = 2; i <= number; i++) {
		a[i] = i;
	}
	for (int i = 2; i <= number; i++) {
		if (a[i] == 0) continue;
		for (int j = 2 * i; j <= number; j += i) {
			a[j] = 0;
		}
	}
	int count = 1;
	for (int i = 1; i <= 10000000; i++) {
		if (a[i] != 0) {
			if (num == count)
			{
				printf("%d", a[i]);
				return 0;
			}
			count++;
		}
	}
}