#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	char a[6];
	while (1)
	{
		scanf("%s", a);

		if (strlen(a) == 1)
		{
			if (a[0] == '0')
			{
				break;
			}
			printf("yes\n");
		}
		else if (strlen(a) == 2)
		{
			if (a[0] == a[1])
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (strlen(a) == 3)
		{
			if (a[0] == a[2])
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (strlen(a) == 4)
		{
			if (a[0] == a[3] && a[1] == a[2])
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (strlen(a) == 5)
		{
			if (a[0] == a[4] && a[1] == a[3])
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
}
