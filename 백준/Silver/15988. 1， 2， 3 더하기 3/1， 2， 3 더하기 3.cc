#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long d[1000000];
long long dynamic(int x)
{
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int a = 4; a <= 1000000; a++)
	{
		d[a] = (d[a - 1] + d[a - 2] + d[a - 3]) % 1000000009;
	}
	return d[x];

}
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        long long c = dynamic(b);
        printf("%d\n", c);
    }
    return 0;
}