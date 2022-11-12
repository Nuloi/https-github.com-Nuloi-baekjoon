#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdbool.h>

int main() {
	int a;
	scanf("%d", &a);
	int* b = (int*)malloc(sizeof(int) * 30001);
	for (int i = 0; i < a; i++){
		scanf("%d", &b[i]);
	}
	int max = 0;
	for (int i = 0; i < a-1; i++){
		int count = 0, l = i + 1;
		while (true) {
			if (b[i]>b[l]&&l!=a) {
				count++;
				l++;
			}
			else{
				if (max<count){
					max = count;
				}
				break;
			}
		}
	}
	printf("%d", max);
	free(b);
}