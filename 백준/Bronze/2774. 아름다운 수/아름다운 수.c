#include <stdio.h>
#include <string.h>

int main() {
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++) {
		int  countNum[11], sum = 0;
		char Num[11];
		for (int k = 0; k < 10; k++) {
			countNum[k] = 0;
		}
		scanf("%s", Num);
		for (int k = 0; k < strlen(Num); k++) {
			int j = Num[k] - '0';
			countNum[j] = 1;
		}
		for (int k = 0; k < 10; k++) {
			if (countNum[k] > 0) {
				sum += 1;
			}
		}
		printf("%d\n", sum);
	}
}