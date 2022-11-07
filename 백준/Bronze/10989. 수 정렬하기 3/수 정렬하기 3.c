#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
int main() {
	long long a;
	scanf("%lld", &a);
	int arr[10001] = { 0 };
	while (a != 0)
	{
		int b;
		scanf("%d", &b);
		arr[b] += 1;
		a--;
	}
	for(int i = 1 ; i <= 10000; i++)
	{
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
}