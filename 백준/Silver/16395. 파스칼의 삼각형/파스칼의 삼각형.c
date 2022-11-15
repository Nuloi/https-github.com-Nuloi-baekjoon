#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdbool.h>

int main() {
    int c[31][31] = { 0, 1 };
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= 30; i++) {
        for (j = 1; j <= i; j++) {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }
    printf("%d",c[a][b]);
    return 0;
}