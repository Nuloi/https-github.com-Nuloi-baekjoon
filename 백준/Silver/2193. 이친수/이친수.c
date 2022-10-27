#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	long long b[101];
	b[0] = 0;
	b[1] = 1;
	for (int i = 2; i <= a; i++)
	{
		b[i] = b[i - 1] + b[i - 2];
	}
	printf("%lld", b[a]);
}