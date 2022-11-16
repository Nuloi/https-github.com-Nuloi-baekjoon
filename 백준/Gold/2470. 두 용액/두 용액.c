#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
void main() {
	int i, n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	
	int low = 2147483647, left, right;
	int L = 0, R = n - 1;
	while (L < R) {
		long long sum = arr[L] + arr[R];
		if (abs(sum) < low) {
			low = abs(sum);
			left = L;
			right = R;
		}
		if (sum < 0)  L++;
		else R--;
	}
	printf("%d %d", arr[left], arr[right]);
	free(arr);
	exit(0);
}