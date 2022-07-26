#include <stdio.h>

int main() {
	int temp, data = 29, tr = 0, data1 = 30;

	int b[28];
	for (int i = 0; i < 28; i++)//28개의 번호를 입력받음
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 28; i++)//28개의 번호는 오름차순으로 나열
		for (int j = 0; j < 28 - 1; j++)
			if (b[j] > b[j + 1]) {
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
	for (int i = 0; i < 28; i++)
	{
		if (b[i]-(i+1)!=0&&tr==0)//첫번째 틀린값
		{
			if ((b[i] - (i + 1) == 2))//첫번째 틀린값이 2일경우
			{
				data = b[i] - 1;
				data1 = b[i] - 2;
				tr = 2;
			}
			data = b[i] - 1;
			tr = 1;
		}
		if (b[i] - (i + 2) != 0 && tr == 1)//두번째 틀린값
		{
			tr = 2;
			data1 = b[i] - 1;
		}
	}
	printf("%d\n%d", data, data1);
}