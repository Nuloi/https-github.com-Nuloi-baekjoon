#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[15];
    long long num1, num2, num3;
    scanf("%lld%lld%lld", &num1, &num2, &num3);
    long long pnum = num1 * num2 * num3;

    sprintf(s1, "%lld", pnum);

    int count[10] = {0};
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == '0')
        {
        count[0] ++;
        }
        else if (s1[i]=='1')
        {
            count[1] ++ ;
        }
        else if (s1[i] == '2')
        {
            count[2] ++;
        }
        else if (s1[i] == '3')
        {
            count[3] ++;
        }
        else if (s1[i] == '4')
        {
            count[4] ++;
        }
        else if (s1[i] == '5')
        {
            count[5] ++;
        }
        else if (s1[i] == '6')
        {
            count[6] ++;

        }
        else if (s1[i] == '7')
        {
            count[7] ++;
        }
        else if (s1[i] == '8')
        {
            count[8] ++;
        }
        else if (s1[i] == '9')
        {
            count[9] ++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}