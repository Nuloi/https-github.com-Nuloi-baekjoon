#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	scanf("%d", &N);
	int x[N], y[N];
	int rain[N];
	
	for (int i = 0; i < N; i++){
		scanf("%d %d", &x[i], &y[i]);
		rain[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (x[i] - x[j] < 0 && y[i] - y[j] < 0) {
				rain[i] += 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", rain[i]);
	}
}