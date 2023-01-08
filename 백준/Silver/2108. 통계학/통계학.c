#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countdata[8002] = { 0, };

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2){return -1;}
	if (num1 > num2){return 1;}
	return 0;
}

int AVG(int data[],int a) {
	double plus = 0;
	for (int i = 0; i < a; i++){plus += (data[i]);}
	plus /= a;
	if (plus < 0) {plus -= 0.5;}
	else {plus += 0.5;}
	return (int)plus;
}

int HIGH() {
	int high = 0, T = 0, max = 0;
	for (int i = 0; i < 8002; i++) {
		if (countdata[i] > max) {//최빈값이 클떄
			max = countdata[i];
			T = 0;
			high = i;
			if (high <= 4000) { high -= 4000; }
			else { high -= 4000; }
		}
		else if (countdata[i] == max && T == 0) {//최빈값이 같을떄 두번째값을 저장
			T = 1;
			high = i;
			if (high <= 4000) { high -= 4000; }
			else { high -= 4000; }
		}
	}
	return high;
}

int range(int data[], int a){
	return data[a-1] - data[0];
}

int main() {
	int a;
	scanf("%d", &a);
	int data[a];
	for (int i = 0; i < a; i++) {
		int d;
		scanf("%d", &d);
		data[i] = d;
		if (d <= 0) { d = abs(d + 4000); }
		else { d += 4000; }
		countdata[d] += 1;
	}
	qsort(data, sizeof(data) / sizeof(int), sizeof(int), compare);//오름차순 정렬
	printf("%d\n", AVG(data, a));//평균
	printf("%d\n", data[a / 2]);//최빈값
	printf("%d\n", HIGH());//최빈값
	printf("%d", range(data, a));//범위
}
