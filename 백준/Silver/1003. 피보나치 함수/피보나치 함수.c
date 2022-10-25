//2022이다현
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int num[41] = { 0 };
    num[0] = 0;
    num[1] = 1;
    int a;
    scanf("%d", &a);
    for (int i = 2; i <= 40; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }
    for (int i = 0; i < a; i++)
    {
        int n;
        scanf("%d", &n);
        if (n==0)
        {
            printf("1 0\n");
            continue;
        }
        else if (n == 0)
        {
            printf("0 1\n");
            continue;
        }
        printf("%d %d\n", num[n-1], num[n]);
    }
}