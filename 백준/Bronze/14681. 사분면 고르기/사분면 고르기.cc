#include <stdio.h>

int main() {
	int a, b, data = 0;
	scanf("%d%d", &a,&b);
	if (a>0&&b>0)
	{
		data = 1;
	}
	if (a>0&&b<0)
	{
		data = 4;
	}
	if (a<0&&b>0)
	{
		data = 2;
	}
	if (a<0&&b<0)
	{
		data = 3;
	}
	printf("%d", data);
}