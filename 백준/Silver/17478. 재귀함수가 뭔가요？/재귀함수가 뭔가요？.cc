#include <stdio.h>

int fust(int a) {
	int b = 0;
	for (int i = 1; i <= a-1; i++)
	{
		while (i>b)
		{
			printf("____");
			b++;
		}
		b = 0;
		printf("\"재귀함수가 뭔가요?\"\n");
		while (i > b)
		{
			printf("____");
			b++;
		}
		b = 0;
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		while (i > b)
		{
			printf("____");
			b++;
		}
		b = 0;
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		while (i > b)
		{
			printf("____");
			b++;
		}
		b = 0;
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	}
	while (a > b)
	{
		printf("____");
		b++;
	}
	b = 0;
	printf("\"재귀함수가 뭔가요?\"\n");
	while (a > b)
	{
		printf("____");
		b++;
	}
	b = 0;
	printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
	return 0;
}

int end	(int a){
	int b = 0;
	while (a>0)
	{
		while (a > b)
		{
			printf("____");
			b++;
		}
		b = 0;
		printf("라고 답변하였지.\n");
		a--;
	}
	return 0;
}

int main() {
	int a;
	scanf("%d", &a);
	if (a>0)
	{
		printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
		printf("\"재귀함수가 뭔가요?\"\n");
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		fust(a);
		end(a);
		printf("라고 답변하였지.");
	}
}