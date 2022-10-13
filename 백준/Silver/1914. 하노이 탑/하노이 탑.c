#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int hanoi(int a, int b, int c, int d) {
    if (a == 1)
    {
        printf("%d %d\n", b, d);
        return 0;
    }
    else
    {
        hanoi(a - 1, b, d, c);
        printf("%d %d\n", b, d);
        hanoi(a - 1, c, b, d);
        return 0;
    }
}

int main() {
    int a;
    scanf("%d", &a);
    if (a <= 20)
    {
        long long l = pow(2, a) - 1;
        printf("%lld\n", l);
        hanoi(a, 1, 2, 3);
    }
    else
    {
        int data[1000] = { 0 };
        int index = 0, temp, next_sum;
        data[0] = 2;
        for (int i = 1; i < a; i++) {
            temp = 0;
            next_sum = 0;
            for (int j = index; j >= 0; j--) {
                temp = data[j] * 2 + next_sum;
                next_sum = 0;
                if (temp > 9) {
                    data[j] = temp % 10;
                    if (j == 0) {
                        for (int k = index; k >= 0; k--) {
                            data[k + 1] = data[k];
                        }
                        data[0] = temp / 10;
                        index++;
                    }
                    else {
                        next_sum = temp / 10;
                    }
                }

                else {
                    data[j] = temp;
                }
            }
        }
        for (int i = 0; i <= index; i++) {

            if (index == i)
            {
                printf("%d", data[i] - 1);
                break;
            }
            printf("%d", data[i]);
        }

    }
    return 0;
}