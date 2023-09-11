#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int Palindrome(char* str);
int PseudoPalin(char* str, int left, int right);

int main() {
    int T;
    char str[100001];

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", str);
        printf("%d\n", Palindrome(str));
    }
    return 0;
}

int Palindrome(char* str) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        if (str[left] == str[right]) {
            left += 1;
            right -= 1;
        }
        else {
            int leftChk = PseudoPalin(str, left + 1, right);
            int rightChk = PseudoPalin(str, left, right - 1);
            if (leftChk || rightChk) {
                return 1;
            }
            else {
                return 2;
            }
        }
    }
    return 0;
}

int PseudoPalin(char* str, int left, int right) {
    while (left < right) {
        if (str[left] == str[right]) {
            left += 1;
            right -= 1;
        }
        else {
            return 0;
        }
    }
    return 1;
}