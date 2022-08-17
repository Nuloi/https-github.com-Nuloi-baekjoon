#include <stdio.h>
#include <string.h>

int main() {
	while (true)
	{
		int a[3], temp;

		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &a[i]);
		}
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			break;
		}
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3 - 1; j++)
				if (a[j] > a[j + 1]) {
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
		if ((a[0] * a[0]) + (a[1] * a[1]) == a[2] * a[2])
		{
			printf("right\n");
		}
		else if ((a[0] * a[0]) + (a[1] * a[1]) != a[2] * a[2])
		{
			printf("wrong\n");
		}
	}
}