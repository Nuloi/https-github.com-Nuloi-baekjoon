#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int x, y, n, w;
	scanf("%d %d %d %d", &x, &y, &n, &w);
    int min = x;
    if (min > n - x)
        min = n - x;
    if (min > y)
        min = y;
    if (min > w - y)
        min = w - y;
    printf("%d", min);
}
