#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	char b[101];
	scanf("%s", b);
	int a[26] = { -1 ,-1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 , -1 };
	int B = 0;
	if ('a' <= b[0] && b[0] <= 'z')
	{
		for (int i = 0; i < strlen(b); i++)
		{
			if (b[i] == 'a' && a[0] == -1) { a[0] = i; }
			else if (b[i] == 'b' && a[1] == -1) { a[1] = i; }
			else if (b[i] == 'c' && a[2] == -1) { a[2] = i; }
			else if (b[i] == 'd' && a[3] == -1) { a[3] = i; }
			else if (b[i] == 'e' && a[4] == -1) { a[4] = i; }
			else if (b[i] == 'f' && a[5] == -1) { a[5] = i; }
			else if (b[i] == 'g' && a[6] == -1) { a[6] = i; }
			else if (b[i] == 'h' && a[7] == -1) { a[7] = i; }
			else if (b[i] == 'i' && a[8] == -1) { a[8] = i; }
			else if (b[i] == 'j' && a[9] == -1) { a[9] = i; }
			else if (b[i] == 'k' && a[10] == -1) { a[10] = i; }
			else if (b[i] == 'l' && a[11] == -1) { a[11] = i; }
			else if (b[i] == 'm' && a[12] == -1) { a[12] = i; }
			else if (b[i] == 'n' && a[13] == -1) { a[13] = i; }
			else if (b[i] == 'o' && a[14] == -1) { a[14] = i; }
			else if (b[i] == 'p' && a[15] == -1) { a[15] = i; }
			else if (b[i] == 'q' && a[16] == -1) { a[16] = i; }
			else if (b[i] == 'r' && a[17] == -1) { a[17] = i; }
			else if (b[i] == 's' && a[18] == -1) { a[18] = i; }
			else if (b[i] == 't' && a[19] == -1) { a[19] = i; }
			else if (b[i] == 'u' && a[20] == -1) { a[20] = i; }
			else if (b[i] == 'v' && a[21] == -1) { a[21] = i; }
			else if (b[i] == 'w' && a[22] == -1) { a[22] = i; }
			else if (b[i] == 'x' && a[23] == -1) { a[23] = i; }
			else if (b[i] == 'y' && a[24] == -1) { a[24] = i; }
			else if (b[i] == 'z' && a[25] == -1) { a[25] = i; }
		}
		for (int i = 0; i < 26; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
	{
		printf("-1");
	}
}