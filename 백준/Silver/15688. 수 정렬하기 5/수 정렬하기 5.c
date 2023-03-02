#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1<num2){
		return -1;
	}if (num2 < num1) {
		return 1;
	}
	return 0;
}

int main() {
	int a;
	scanf("%d", &a);
	int num[a];
	for (int i; i < a; i++) {
		scanf("%d", &num[i]);
	}
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
	for (int i = 0; i < a; i++){
		printf("%d\n", num[i]);
	}
}