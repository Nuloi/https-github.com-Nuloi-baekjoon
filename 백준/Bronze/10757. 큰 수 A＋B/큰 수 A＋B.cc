#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	char a[10001], b[10001];
	int plus[10002];
	int A, B, tr = 0, s;
	long long D, C, F;
	scanf("%s %s", a, b);
	D = strlen(a) - strlen(b);

	if (D < 0)
	{
		D = D * -1;
	}
	if (strlen(a) > strlen(b))
	{
		C = strlen(a);
		F = 0;
	}
	else if (strlen(a) < strlen(b))
	{
		C = strlen(b);
		F = 1;
	}
	else if (strlen(a) == strlen(b))
	{
		C = strlen(b);
		F = 2;
	}
	for (int i = 1; i <= C; i++)
	{
		if (D != 0)
		{
			if (F == 0)
			{
				A = a[C - i] - '0';
				if (C - i - D >= 0)
				{
					B = b[C - i - D] - '0';
				}
				else if (C - i - D < 0)
				{
					B = 0;
				}
			}
			else if (F == 1)
			{
				if (C - i - D >= 0)
				{
					A = a[C - i - D] - '0';
				}
				else if (C - i - D < 0)
				{
					A = 0;
				}
				B = b[C - i] - '0';
			}
		}
		else if (D == 0)
		{
			A = a[strlen(a) - i] - '0';
			B = b[strlen(b) - i] - '0';
		}
		if (A + B + tr >= 10)
		{
			plus[i - 1] = A + B - 10 + tr + '0';
			tr = 1;
		}
		else if (A + B + tr < 10)
		{
			plus[i - 1] = A + B + tr + '0';
			tr = 0;
		}
		A = 0;  B = 0;
		s = i;
	}
	if (tr == 1)
	{
		printf("1");
	}
	for (int i = 1; i <= s; i++)
	{
		printf("%c", plus[s - i]);
	}
}