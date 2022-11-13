#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdbool.h>
int main() {
	int dp[31] = { 0,0,3 };	//점화식 타일은 2의 배수만 허용 한다 그러므로 그 외의 값은 0이 된다
	for (int i = 4; i < 31; i += 2) {
		dp[i] = dp[i - 2] * dp[2];	//dp배열의 점화색은 이전 2배수의 값에 3을 곱한다
		for (int j = 4; j < i; j += 2) {
			dp[i] += dp[i - j] * 2;//그 후 전전 값 전까지 모든 값의 2를 곱해 더 한다.   
		}
		dp[i] += 2;//2를 더한다
	}
	//점화식은 dp[6]=(dp[6-2]*dp[2])+(dp[6-4]*2)+2 가 된다 dp[6]=33+6+2
	//dp[8] dp[8]=(dp[8-2]*dp[2])+(dp[8-4]*2)+dp[dp[8-6]*2)+2 dp[8]=123+22+6+2
	int n;
	scanf("%d", &n);
	printf("%d", dp[n]);
}