#include <stdio.h>
#include <string.h>

int main() {
	int a, c = 0;
	scanf("%d", &a);
	char b[a];
	scanf("%s", b);
	for (int i = 0; i < a; i++)
	{
		c += b[i]-'0';
	}
	printf("%d", c);
}