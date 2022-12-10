#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	int* lien = (int*)malloc(sizeof(int) * num + 1);
	for (int i = 0; i <= num; i++){
		lien[i] = 0;
	}
	for (int i = 1; i <= num; i++){
		int jump;
		scanf("%d", &jump);
		if (lien[num - jump] == 0){
			lien[num - jump] = i;
		}
		else{
			int temp = 0;
			int teep = i; 
			for (int j = 0; j < i-jump; j++){
				temp = lien[num - jump - j];
				lien[num - jump - j] = teep;
				teep = temp;
			}
		}
	}
	for (int i = 1; i <= num; i++){
		printf("%d ", lien[i]);
	}
}