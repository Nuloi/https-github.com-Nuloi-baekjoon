#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int	main(void) {
	int max;
	int sum = 0;
	scanf("%d", &max);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (sum == max) {
		printf("Yes");
		return 0;
	}
	printf("No");
	return 0;
}