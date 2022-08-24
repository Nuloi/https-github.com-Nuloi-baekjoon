#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	char a[1000000];
	scanf("%[^\n]", a);
	char* b = strtok(a, " ");
	long long count = 0;
	while (b != NULL)
		while (b!=NULL)
		{
			count += 1;
			b = strtok(NULL, " ");
		}
	printf("%lld", count);
}