#include <stdio.h>
#include <cmath>

int hanoi(int a, int b, int c, int d) {
	if (a==1)
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
	int k = pow(2, a) - 1;
	printf("%d\n", k);
	hanoi(a, 1, 2, 3);
	return 0;
}