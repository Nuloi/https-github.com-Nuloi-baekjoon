#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
	char dam[101];
	int a, count = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int tr = 0;
		scanf("%s", dam);
		for (int i = 0; i < strlen(dam); i++)
		{
			for (int j = 0; j < i-1; j++)
			{
				if (dam[i]==dam[j])
				{
					if (dam[j] == dam[j+1])
					{
						for (int k = j; k < i; k++)
						{
							if (dam[k]!=dam[k+1]) {
								tr = 1;
								break;
							}
						}
					}
					else {
						tr = 1;
					}
				}
				if (tr == 1) {
					break;
				}
			}
			if (tr == 1) {
				break;
			}
		}
		if (tr==0)
		{
			count++;
		}
	}
	printf("%d", count);
}