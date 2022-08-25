#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	int h, m;
	scanf("%d%d", &h, &m);
	m = m - 45;
	if (m < 0)
	{
		h = h - 1;
		m = m + 60;
		if (h<0)
		{
			h = 24 + h;
		}
	}
	printf("%d %d", h, m);
}