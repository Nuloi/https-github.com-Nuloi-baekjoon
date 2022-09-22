#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
	if (strlen((char*)a) > strlen((char*)b))
	{
		return 1;
	}
	if (strlen((char*)a) < strlen((char*)b))
	{
		return -1;
	}
	if (strlen((char*)a) == strlen((char*)b))//문자열 길이가 같은때 사전순으로
	{
		return strcmp((char*)a, (char*)b);
	}
}

int main() {
	int z;
	scanf("%d", &z);
	char a[z][51];
	for (int i = 0; i < z; i++)//문자열 입력받기
	{
		scanf("%s", a[i]);
	}
	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare);//퀵소트 문자열 a
	for (int i = 0; i < z; i++)//문자열 출력
	{
		if (strcmp(a[i], a[i+1]) != 0)//다음 출력과 같지 않을경우 출력
		{
			printf("%s\n", a[i]);
		}
	}
}