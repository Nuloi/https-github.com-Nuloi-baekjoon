#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2)
		return -1;
	if (num1 > num2)
		return 1;
	return 0;
}
int compar(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2)
		return 1;
	if (num1 > num2)
		return -1;
	return 0;
}

int main()
{
	int n, max = 0, ar;
	scanf("%d", &n);
	int negative[100], nc = 0;
	int amniotic[100], ac = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar);
		if (ar <= 0) {
			negative[nc] = ar;
			nc++;
		}
		else if (ar == 1){
			max += 1;
		}
		else if (ar > 1) {
			amniotic[ac] = ar;
			ac++;
		}
	}
	qsort(negative, nc, sizeof(int), compare);
	qsort(amniotic, ac, sizeof(int), compar);
	int i = 0;
	while (i < nc){
		if (i+1<nc) {
			max += negative[i] * negative[i + 1];
			i += 2;
		}
		else{
			max += negative[i];
			i++;
		}
	}
	i = 0;
	while (i < ac){
		if (i+1 < ac) {
			max += amniotic[i] * amniotic[i + 1];
			i += 2;
		}
		else{
			max += amniotic[i];
			i++;
		}
	}
	printf("%d", max);
}