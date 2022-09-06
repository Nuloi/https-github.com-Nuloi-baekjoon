#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int z, a, b, c;;
	scanf("%d", &z);
	for (int i = 0; i < z; i++)
	{
		
		scanf("%d %d %d", &a, &b, &c);
		if (c%a==0)
		{
			printf("%d%02d\n", a, c / a);
		}
		else {
			printf("%d%02d\n", c% a, c / a + 1);
		}
	}
}