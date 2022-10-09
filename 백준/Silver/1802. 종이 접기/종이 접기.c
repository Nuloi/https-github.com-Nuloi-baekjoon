#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T, pos;
    char data[3030];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%s", &data[1]);
        pos = strlen(&data[1]) / 2;
        int f = 0;
        while (pos != 0)
        {
            for (int j = 1; j <= pos; j++)
            {
                if (data[j] == data[pos * 2 + 2 - j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                break;
            }
            pos /=2;
        }
        if (f == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}