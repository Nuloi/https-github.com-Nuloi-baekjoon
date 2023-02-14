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
	int a;
	int num[10];
	scanf("%d",&a);
	for (int i = 0; i < a; i++){
		for (int i = 0; i < 10; i++){
			scanf("%d", &num[i]);
		}
		qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
		printf("%d\n", num[7]);
	}
}