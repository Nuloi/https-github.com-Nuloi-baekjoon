#include <stdio.h>

int main() {
	int a, temp;
	scanf("%d", &a);

	int b[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < a; i++)
		for (int j = 0; j < a - 1; j++)
			if (b[j] > b[j + 1]) {
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
	for (int i = 0; i < a; i++)
	{
		printf("%d\n", b[i]);
	}
}