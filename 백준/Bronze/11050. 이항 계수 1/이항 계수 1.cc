#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int fate(int a) {
	int b;
	b = 1;
	for (int i = 1; i <= a; i++)
	{
		b = i * b;
	}
	return b;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int nl, r, r1;
	nl = fate(a);
	r = fate(b);
	r1 = fate(a - b);
	printf("%d", nl / (r * r1));
}