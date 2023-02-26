#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2){return -1;}
	if (num1 > num2){return 1;}
	return 0;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a + b;
	int num[c];
	for (int i = 0; i < c; i++){
		scanf("%d", &num[i]);
	}
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
	for (int i = 0; i < c; i++) {
		printf("%d ", num[i]);
	}
}