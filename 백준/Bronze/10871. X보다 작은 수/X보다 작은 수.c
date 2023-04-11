#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n, x;
	scanf("%d %d", &n, &x);
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i]<x){
			b[t] = a[i];
			t++;
		}
	}
	for (int i = 0; i < t; i++){
		printf("%d ", b[i]);
	}
}