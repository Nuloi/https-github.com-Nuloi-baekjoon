#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	int a, b, t = 0;
	scanf("%d%d", &a, &b);
	int a1 = a, b1 = b;
	int c;
	if (a < b); //큰숫자 정렬
	{
		a = b1;
		b = a1;
	}
	while(t == 0) {
		if (a % b == 0)
		{
			c = b;
			t = 1;
		}
		else
		{
			c = a % b;
			a = b;
			b = c;
		}
	}
	printf("%d\n", c);
	printf("%d", c * (a1/c) * (b1/c));
}