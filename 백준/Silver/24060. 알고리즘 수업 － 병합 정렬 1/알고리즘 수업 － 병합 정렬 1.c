#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int sorted[500000];
int saveNum = -1;
int rcount = 0;

void merge(int a[], int m, int middle, int n,int count) {
	int i = m;
	int j = middle + 1;
	int k = m;
	//작은 순서대로 배열에 삽입
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
			rcount++;
			if (rcount==count){
				printf("%d", sorted[k]);
				exit(0);
			}
		}
		else {
			sorted[k] = a[j];
			j++;
			rcount++;
			if (rcount == count) {
				printf("%d", sorted[k]);
				exit(0);
			}
		}
		k++;
	}
	//남은 데이터도 삽입
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
			rcount++;
			if (rcount == count) {
				printf("%d", sorted[k-1]);
				exit(0);
			}
		}
	}
	else{
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
			rcount++;
			if (rcount == count) {
				printf("%d", sorted[k-1]);
				exit(0);
			}
		}
	}
	//정렬된 배열 삽입
	for (int t = m; t <= n; t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n, int count) {
	//크기가 1보다 큰 경우
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle,count);
		mergeSort(a, middle + 1, n,count);
		merge(a, m, middle, n, count);
	}
}


int main(void) {
	int size,count;
	scanf("%d %d", &size, &count);
	int* array = (int*)malloc(sizeof(int) * size + 1);
	for (int i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}
	mergeSort(array, 0, size - 1, count);
	printf("-1");
	exit(0);
}