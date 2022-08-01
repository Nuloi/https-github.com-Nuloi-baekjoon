#include <stdio.h>

int main() {
	int a, b, c = 10;
	scanf("%d", &a);
	if (a<=9)
	{
		printf("%d", a);
	}
	else
	{
		int aa[c];
		int i = 0;
		int temp;
		while (1) {
			aa[i] = a % 10;
			a = a / 10;
			i++;
			if (a < 10) {

				aa[i] = a;
				break;
			}
		}

		for (int w = 0; w < i; w++)
		{
			for (int j = 0; j < i - w; j++)

				if (aa[j] > aa[j + 1]) {

					temp = aa[j];

					aa[j] = aa[j + 1];

					aa[j + 1] = temp;

				}
		}
		for (int j = 0; j <= i; j++) {
			printf("%d", aa[i - j]);
		}
	}
	
}