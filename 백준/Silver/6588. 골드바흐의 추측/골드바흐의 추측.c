#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int a[1000001];
void aro(int num,int num2) {
	
}
int	main(void) {
	int number = 1000000;
	int* a = (int*)malloc(sizeof(int) * 1000001);
	for (int i = 2; i <= 1000000; i++) {
		a[i] = i;
	}
	for (int i = 2; i <= 1000000; i++) {
		if (a[i] == 0) continue;
		for (int j = 2 * i; j <= 1000000; j += i) {
			a[j] = 0;
		}
	}
	int c;
	while (1){
		scanf("%d", &c);
		if (c==0){
			return;
		}
		int in = 3;
		while (in<(c+1/2)){
			if (a[in] != 0) {
				if (a[c - in] != 0) {
					printf("%d = %d + %d\n", c, in, c - in);
					break;
				}
			}
			in += 2;
		}
		if (in >= (c + 1 / 2)){
			printf("\"Goldbach's conjecture is wrong.\"\n");
		}
	}
}