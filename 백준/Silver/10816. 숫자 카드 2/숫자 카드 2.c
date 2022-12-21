#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int* key = (int*)malloc(sizeof(int) * 20000005);
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++){
		int b;
		scanf("%d", &b);
		if (b < 0){
			b = abs(b) + 10000000;
		}
		key[b] += 1;
	}
	int c;
	scanf("%d", &c);
	for (int i = 0; i < c; i++){
		int b;
		scanf("%d", &b);
		if (b < 0) {
			b = abs(b) + 10000000;
		}
		printf("%d ", key[b]);
	}
}