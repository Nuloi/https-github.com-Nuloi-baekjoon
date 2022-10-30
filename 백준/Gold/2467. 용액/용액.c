#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a;
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	int low = 2147483647, left, right;
	int L = 0, R = a - 1;
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
}
