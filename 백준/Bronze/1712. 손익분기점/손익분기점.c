#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int math(int a,int b,int c) {
	if (b >= c) {
		return -1;
	}
	else {
		return (a / (c - b)) + 1;
	}
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", math(a, b, c));
}