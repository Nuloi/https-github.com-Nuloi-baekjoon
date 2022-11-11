#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d", &a);
	int money = 1000 - a, count = 0;
	if (money / 500 > 0){
		count += money / 500;
		money %= 500;
	}
	if(money / 100 > 0){
		count += money / 100;
		money %= 100;
	}
	if (money / 50 > 0) {
		count += money / 50;
		money %= 50;
	}
	if (money / 10 > 0) {
		count += money / 10;
		money %= 10;
	}
	if (money / 5 > 0) {
		count += money / 5;
		money %= 5;
	}
	if (money / 1 > 0) {
		count += money / 1;
	}
	printf("%d", count);
}