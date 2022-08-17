#include <stdio.h>
#include <string.h>

int main() {
	int t, y, u, k, end;
	char a[100];
	char b;
	while (1)
	{
		scanf("%[^\n]", a);
		end = a[0];
		if (end == 0)
		{
			break;
		}
		t = 0, y = 0, u = 0, k = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			b = a[i];
			if (b >= '0' && b <= '9') {
				t = t + 1;
			}
			else if (b >= 'A' && b <= 'Z')
			{
				y = y + 1;
			}
			else if (b >= 'a' && b <= 'z')
			{
				u = u + 1;
			}
			else if (b == ' ')
			{
				k = k + 1;
			}
		}
		a[0] = '\0';
		getchar();
		printf("%d %d %d %d\n", u, y, t, k);
	}
}