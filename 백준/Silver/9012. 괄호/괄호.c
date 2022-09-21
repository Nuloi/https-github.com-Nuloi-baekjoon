#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STACK_SIZE 1000
typedef char element;
element stack[MAX_STACK_SIZE];
int tops = -1;

int is_empty()
{
    return (tops == -1);
}

int is_full()
{
    return (tops == (MAX_STACK_SIZE - 1));
}

void push(element item)
{
    stack[++tops] = item;
}

element pop()
{
    if (tops == -1) {
        return -1;
    }
    else return stack[tops--];
}
element size()
{
    return stack[tops];
}

int main() {
    int z;
    scanf("%d", &z);
    for (int i = 0; i < z; i++)
    {
        char a[51];
        scanf("%s", a);
        if (strlen(a) % 2 == 1)
        {
            printf("NO\n");
        }
        else if (strlen(a) % 2 == 0)
        {
            int count = 0;
            int tr = 0;
            for (int i = 0; i < strlen(a); i++)
            {
                push(a[i]);
            }
            for (int i = 0; i < strlen(a); i++)
            {
                if (size() == ')')
                {
                    pop();
                    count += 1;
                }
                else if (size() == '(' && count > 0)
                {
                    pop();
                    count -= 1;
                }
                else if (size() == '(' && count == 0)
                {
                    printf("NO\n");
                    tr = 1;
                    break;
                }
            }
            if (count == 0 && tr == 0) {
                printf("YES\n");
            }
            else if (tr == 1) {
            }
            else {
                printf("NO\n");
            }
        }

    }
}