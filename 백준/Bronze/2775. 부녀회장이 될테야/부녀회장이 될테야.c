#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int k, int n) {
	int out = 0;
	if (k == 0) {
		return n;
	}
	else {
		for (int j = 1; j <= n; j++) {
			out += sum(k - 1, j);
		}
		return out;
	}
}

int main() {
	int T;
	scanf("%d", &T);
	int k, n, output[T];

	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		output[i] = sum(k, n);
	}

	for (int j = 0; j < T; j++){
		printf("%d\n", output[j]);
	}
}
