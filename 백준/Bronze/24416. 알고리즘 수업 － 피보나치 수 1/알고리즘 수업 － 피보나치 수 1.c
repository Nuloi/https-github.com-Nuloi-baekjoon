    //2022이다현
    #define _CRT_SECURE_NO_WARNINGS 
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int main(void) {
        int num[41] = { 0 };
        num[0] = 0;
        num[1] = 1;
        num[2] = 1;
        int a, count = 0;
        scanf("%d", &a);
        for (int i = 3; i <= a; i++)
        {
            num[i] = num[i - 1] + num[i - 2];
            count++;
        }
        printf("%d %d\n", num[a], count);
    }