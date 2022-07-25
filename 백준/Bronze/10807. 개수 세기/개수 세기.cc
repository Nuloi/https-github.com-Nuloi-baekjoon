#include <stdio.h>

int main() {
	int b, c, data = 0;
	scanf("%d", &b);
	int a[b];
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &c);
	for (int i = 0; i < b; i++)
	{
		if(a[i]==c){
			data++;
		}
	}
	printf("%d", data);
}