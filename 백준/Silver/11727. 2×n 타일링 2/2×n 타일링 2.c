#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
int main() {
	int a;
	int b[1001];
	b[0] = 0;
	b[1] = 1;
	b[2] = 3;
	for (int i = 3; i <= 1000; i++)
	{
		b[i] = (b[i - 1] + b[i - 2] * 2)%10007;
	}
	scanf("%d", &a);
	printf("%d", b[a]);
}