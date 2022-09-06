#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c[100]={0}, z = 0, d[3];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a - 1; j++) {
			for (int k = j + 1; k < a; k++)
			{
				int sum = c[i] + c[j] + c[k];
				if (sum > z && sum <= b ) {
					z = sum;
				}
			}
		}
		
	}
	printf("%d", z);
}