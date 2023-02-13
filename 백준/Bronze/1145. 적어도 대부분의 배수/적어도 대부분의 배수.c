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
	int num[5], max = 1;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
	max = num[0] * num[1] * num[2];

	for (int i = 1; i <= max; i++) {
		int count = 0;
		for (int j = 0; j < 5; j++) {
			if (num[j] <= i && i % num[j] == 0) {count++;}
		}
		if (count >= 3) {
			printf("%d", i);
			break;
		}
	}
}