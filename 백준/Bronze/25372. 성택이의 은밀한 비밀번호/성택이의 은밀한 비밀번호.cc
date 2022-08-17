#include <stdio.h>
#include <string.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		char b[20];
		scanf("%s", b);
		if (5 < strlen(b) && strlen(b) < 10)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}