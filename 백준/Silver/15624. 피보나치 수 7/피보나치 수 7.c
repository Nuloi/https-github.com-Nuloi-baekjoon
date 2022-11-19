#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * 1000001);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <=n ; i++){
        arr[i] = (arr[i - 1] + arr[i - 2])% 1000000007;
    }
    printf("%d", arr[n]);
    free(arr);
}