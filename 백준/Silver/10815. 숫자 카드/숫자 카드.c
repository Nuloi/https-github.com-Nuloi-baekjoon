#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
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


int bray(int data[], int a, int high) {//틀린거
    int low = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (data[mid] == a)
        {
            return 1;
        }
        else if (data[mid] > a)
        {
            high = mid - 1;
        }
        else if (data[mid] < a)
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int m;
	scanf("%d", &m);
	int arr2[m];

	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}

	qsort(arr, n, sizeof(int), compare);

	for (int j = 0; j < m; j++) {
		printf("%d ", bray(arr, arr2[j], n-1));
	}
	return 0;
}