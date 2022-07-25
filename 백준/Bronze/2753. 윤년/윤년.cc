#include <stdio.h>

int main() {
	int a, data = 0;
	scanf("%d", &a);
	if (a%4==0)
	{
		data = 1;
	}
	if (a % 100 == 0) {
		data = 0;
	}
	if (a % 400 == 0)
	{
		data = 1;
	}
	printf("%d", data);
}