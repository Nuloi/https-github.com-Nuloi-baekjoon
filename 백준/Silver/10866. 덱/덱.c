#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STACK_SIZE 100000
typedef int element;
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

void push_front(element item)
{
    stack[++tops] = item;
}
void push_back(element item)
{
    if (tops == -1)
    {
        stack[++tops] = item;
    }
    else
    {
        int i = tops;
        while (i >= 0)
        {
            stack[i + 1] = stack[i];
            i--;
        }
        tops++;
        stack[0] = item;
    }
}

element pop_front()
{
    if (tops == -1) {
        return -1;
    }
    else return stack[tops--];
}
element pop_back()
{
    if (tops == -1) {
        return -1;
    }
    if (tops == 0) {
        return stack[tops--];
    }
    else
    {
        int dume;
        dume = stack[0];
        for (int i = 1; i <= tops; i++)
        {
            stack[i - 1] = stack[i];
        }
        tops--;
        return dume;
    }
}
element size()
{
    return tops + 1;
}
element empty()
{
    if (tops == -1) {
        return 1;
    }
    else return 0;
}
element front()
{
    if (tops == -1) {
        return -1;
    }
    return stack[tops];
}
element back()
{
    if (tops == -1) {
        return -1;
    }
    return stack[0];
}
int main() {
    int z;
    scanf("%d", &z);
    for (int i = 0; i < z; i++)
    {
        char a[30];
        scanf("%s", a);
        if (strcmp(a, "push_front") == 0)
        {
            int b;
            scanf("%d", &b);
            push_front(b);
        }
        else if (strcmp(a, "push_back") == 0)
        {
            int b;
            scanf("%d", &b);
            push_back(b);
        }
        else if (strcmp(a, "pop_front") == 0)
        {
            printf("%d\n", pop_front());
        }
        else if (strcmp(a, "pop_back") == 0)
        {
            printf("%d\n", pop_back());
        }
        else if (strcmp(a, "size") == 0)
        {
            printf("%d\n", size());
        }
        else if (strcmp(a, "empty") == 0)
        {
            printf("%d\n", empty());
        }
        else if (strcmp(a, "front") == 0)
        {
            printf("%d\n", front());
        }
        else if (strcmp(a, "back") == 0)
        {
            printf("%d\n", back());
        }
    }
}