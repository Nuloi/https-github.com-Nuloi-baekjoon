#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int yenum(int a, int b){

	if (a<10){
		if (a % 3 == 0) {
			printf("%d\nYES", b);
			return 0;
		}
	printf("%d\nNO", b);
	return 0;
	}
	else{
		int p = 0;
		while (a != 0){
			p += a % 10;
			a /= 10;
		}
		return yenum(p, b + 1);
	}
}

int main() {
	char dam[1000001] = { NULL };
	scanf("%s", dam);
	if (strlen(dam) == 1){
		if (dam[0] % 3 == 0) {
			printf("0\nYES");
			return 0;
		}
		printf("0\nNO");
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < strlen(dam); i++) {
		sum += dam[i] - '0';
	}
	yenum(sum, 1);
}