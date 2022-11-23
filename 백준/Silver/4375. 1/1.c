#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int number(int a, int b, int count) {
	if (a % b == 0){
		return count;
	}
	else{
		return number(((a * 10) + 1) % b, b, count + 1);
	}
}

int main() {
	int a;
	while (scanf("%d", &a) != EOF){
		printf("%d\n", number(1, a, 1));
	}
}