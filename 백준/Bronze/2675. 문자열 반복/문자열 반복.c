#include <stdio.h>
#include <string.h>

int main() {
	char a[20];
	int b, r;
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d %s", &r, a);
		
		for (int j = 0; j < strlen(a); j++)
		{
			for (int k = 0; k < r; k++)
			{
				printf("%c", a[j]);
			}
		}
		printf("\n");
	}
}