#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int dir_x[4] = { 0,1,0,-1 };
int dir_y[4] = { 1,0,-1,0 };
int cnt_;

int DFS(int** arr, int** visited, int start_y, int start_x, int N)
{
	visited[start_y][start_x] = 1;
	int next_x;
	int next_y;
	int idx = 0;
	cnt_++;

	while (idx < 4)
	{
		next_x = start_x + dir_x[idx];
		next_y = start_y + dir_y[idx];
		if (!(next_x <= 0 || next_x > N || next_y <= 0 || next_y > N))
		{
			if (arr[next_y][next_x] == 1 && visited[next_y][next_x] == 0)
			{
				visited[next_y][next_x] = 1;
				DFS(arr, visited, next_y, next_x, N);
			}
		}
		idx++;
	}
	return cnt_;
}

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return -1;
	}
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int N; /* 지도 크기 */
	int cnt[1000] = { 0, }; /* 집 카운트 */

	scanf("%d", &N);

	/* 그래프 동적할당 */
	int** arr = (int**)malloc(sizeof(int*) * (N + 1));
	for (int l = 0; l <= N; l++)
	{
		arr[l] = (int*)malloc(sizeof(int) * (N + 1));
	}

	/* 방문기록 동적할당 */
	int** visited = (int**)malloc(sizeof(int*) * (N + 1));
	for (int l = 0; l <= N; l++)
	{
		visited[l] = (int*)malloc(sizeof(int) * (N + 1));
		memset(visited[l], 0, sizeof(int) * (N + 1));
	}

	int j;
	/* 값 입력 */
	char input[26];
	for (int l = 1; l <= N; l++)
	{
		j = 1;
		scanf("%s", input);
		while (j <= N)
		{
			arr[l][j] = input[j - 1] - '0';
			j++;
		}
	}


	/* DFS 탐색 */
	int i = 0; /* cnt 배열 인덱스 */
	for (int l = 1; l <= N; l++)
	{
		j = 1;
		while (j <= N)
		{
			if (arr[l][j] == 1 && visited[l][j] == 0)
			{
				cnt_ = 0;
				cnt[i] = DFS(arr, visited, l, j, N);
				i++;
			}
			j++;
		}
	}
	/* 정렬 */
	qsort(cnt, i, sizeof(int), compare);

	/* 단지수 출력 */
	printf("%d\n", i);
	int idx = 0;
	while (cnt[idx] != 0)
	{
		printf("%d\n", cnt[idx]);
		idx++;
	}
}