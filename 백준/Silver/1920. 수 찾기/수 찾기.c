#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return -1;
	}
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
}


int bray(int data[], int a, int size) {
	int low, high, mid;
	low = 0;
	high = size - 1;
	while (1) {
		mid = (low + high) / 2;
		if (data[mid] == a) return 1;
		if (data[low] == a) return 1;
		if (data[high] == a) return 1;

		if (data[mid] < a)
			low = mid + 1;
		else
			high = mid - 1;
		if (low >= high)
			return 0;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int m;
	scanf("%d", &m);
	int* arr2 = (int*)malloc(m * sizeof(int));

	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}

	qsort(arr, n, sizeof(int), compare);

	for (int j = 0; j < m; j++) {
		printf("%d\n", bray(arr, arr2[j], n));
	}
	return 0;
}