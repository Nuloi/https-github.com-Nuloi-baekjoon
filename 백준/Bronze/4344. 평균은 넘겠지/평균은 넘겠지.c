#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int z, max = 0, count = 0;
		scanf("%d", &z);
		int b[z];
		for (int j = 0; j < z; j++)
		{
			scanf("%d", &b[j]);
			max += b[j];
		}
		float lul = max / z;
		for (int j = 0; j < z; j++)
		{
			if (b[j] > lul)
			{
				count++;
			}
		}
		float num = (float)count / (float)z * 100;
		printf("%0.3f%%\n", num);

	}
}