#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdbool.h>


int main() {
    long long num[46] = { 0 };
    num[0] = 0;
    num[1] = 1;
    for (int i = 2; i <= 45; i++){
        num[i] = num[i - 1] + num[i - 2];
    }
    int a;
    scanf("%d", &a);
    for (int q = 0; q < a; q++)
    {
        long long b;
        scanf("%lld", &b);
        long long rp[46];
        int dcount = 0, s = 45;
        while (b != 0){
            if (b >= num[s]) {
                rp[dcount] = num[s];
                b -= num[s];
                dcount += 1;
            }
            s--;
        }
        for (int i = dcount-1; i >= 0; i--)
        {
            printf("%lld ", rp[i]);
        }
        printf("\n");
    }
}