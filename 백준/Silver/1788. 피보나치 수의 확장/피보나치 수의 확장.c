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
    if (n>1){
        for (int i = 2; i <= abs(n); i++) { arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000000; }
    }
    else{
        n = abs(n);
        for (int i = 2; i <= n; i++){
            arr[i] = (arr[i - 2] - arr[i - 1]) % 1000000000;
        }
    }
    if (arr[n] > 0) {
        printf("1\n");
    }
    else if (arr[n] < 0){
        printf("-1\n");
    }
    else{
        printf("0\n");
    }
    printf("%d", abs(arr[n]));
    free(arr);
}