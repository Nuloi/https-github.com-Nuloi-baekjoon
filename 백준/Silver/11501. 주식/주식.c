#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int rc(int* ca, int day, int high) {
	long long money[day], count = 0, rmoney = 0;
	for (int i = 0; i < day; i++)
	{
		if (i + 1 == day)
		{
			for (int k = 0; k < count; k++)
			{
				rmoney += (ca[i] - money[k]);
			}
			break;
		}
		else if (ca[i] <= ca[i + 1])
		{
			money[count] = ca[i];
			count++;
		}
		else if (ca[i] > ca[i + 1])
		{
			int d = 0;
			for (int m = i+1; m < day; m++)
			{
				if (ca[i] < ca[m])
				{
					money[count] = ca[i];
					count++;
					d++;
					break;
				}
			}
			if (d==0)
			{
				for (int k = 0; k < count; k++)
				{
					rmoney += (ca[i] - money[k]);
				}
				count = 0;
			}
		}
	}
		printf("%lld\n",rmoney);
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int k, high = 0;
		scanf("%d", &k);
		int day[k];
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &day[j]);
			if (high < day[i])
			{
				high = day[i];
			}
		}
	rc(day, k, high);
	}
}