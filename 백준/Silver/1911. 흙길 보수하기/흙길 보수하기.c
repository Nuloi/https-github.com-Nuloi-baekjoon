#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct line {
	int s;
	int e;
} Line;

int compare(const void* a, const void* b) {
	Line num1 = *(Line*)a;
	Line num2 = *(Line*)b;
	if (num1.s > num2.s)
	{
		return 1;
	}
	else if (num1.s == num2.s)
	{
		if (num1.e > num2.e)
		{
			return 1;
		}
		else {
			return -1;
		}
	}
	return -1;
}

int main()
{
	int a, b;
	scanf("%d %lld", &a, &b);
	Line line[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &line[i].s, &line[i].e);
	}

	qsort(line, a, sizeof(Line), compare);//정렬

	int count = 0, block = 0;

	for (int i = 0; i < a; i++)
	{
		if (block >= line[i].e)//판자가 놓여져 있는거 보다 작을때 
		{
			continue;
		}
		if (block < line[i].s)//판자가 놓여져 있는거보다 클때
		{
			block = line[i].s;
		}
		int cnt = (line[i].e - (block + 1)) / b + 1;//필요한 판자의 개수 웅덩이 끝-(판자현재 길이+1)/판자 크기+1
		count += cnt;
		block += b * cnt;
	}
	printf("%d", count);
}