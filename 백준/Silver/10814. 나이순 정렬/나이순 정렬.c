#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
	int age;
	char name[101];
} STUDENT;

int main(void)
{
	int a;
	scanf("%d", &a);
	STUDENT stu[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d %s", &stu[i].age, stu[i].name);
	}
	for (int i = 0; i <= 200; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (stu[j].age==i)
			{
				printf("%d %s\n", stu[j].age, stu[j].name);
			}
		}
	}
	return 0;
}