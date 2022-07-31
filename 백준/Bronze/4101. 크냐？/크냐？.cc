#include <stdio.h>

int main() {
	int a=1, b=1;
	while (a!=0&&b!=0)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			printf("Yes\n");
		}
		else if (a < b)
		{
			printf("No\n");
		}
		else if(a==0&&b==0)
		{

		}
		else if (a == b)
		{
			printf("No\n");
		}

	}
}