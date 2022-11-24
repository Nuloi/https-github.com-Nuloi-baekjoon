#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
	int n;
	unsigned long long sum = 0;
	scanf("%d", &n);
	unsigned long long* arr;
	arr = (unsigned long long*)malloc(sizeof(unsigned long long) * (n + 1));
	for (int i = 0; i < n + 1; i++) {
		arr[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j * i <= n; j++) {
			arr[i] = arr[i] + 1;

		}
	}
	for (int i = 1; i <= n; i++) {
		sum = sum + arr[i] * i;
	}
	printf("%lld\n", sum);
	free(arr);
	return 0;
}