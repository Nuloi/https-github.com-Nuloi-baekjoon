#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main() {
	char a[101];
	scanf("%s", a);
	int count=0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'c' && a[i + 1] == '='|| a[i] == 'c' && a[i + 1] == '-'|| a[i] == 'l' && a[i + 1] == 'j'|| a[i] == 'n' && a[i + 1] == 'j'|| a[i] == 's' && a[i + 1] == '='|| a[i] == 'z' && a[i + 1] == '='|| a[i] == 'd' && a[i + 1] == '-') {
			count++;
			i+=1;
		}
		else if (a[i] == 'd'&& a[i + 1] == 'z' && a[i + 2] == '=')
		{
			count++;
			i+=2;
		}
		else
		{
			count++;
		}
	}
	printf("%d", count);
}