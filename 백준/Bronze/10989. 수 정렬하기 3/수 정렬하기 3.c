	#define _CRT_SECURE_NO_WARNINGS    
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <math.h>

	int main(void) {
		int arr[10001] = { 0 };
		int n;
		scanf("%d", &n);
		while (n != 0){
			int b;
			scanf("%d", &b);
			arr[b] += 1;
			n--;
		}
		for(int i = 1 ; i <= 10000; i++)
		{
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
