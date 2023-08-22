#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10001
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

void push(element item)
{
    stack[++tops] = item;
}

element pop() {
    return (tops == -1) ? -1 : stack[tops--];
}

element size() {
    return tops + 1;
}

element empty() {
    return (tops == -1) ? 1 : 0;
}

element top() {
    return (tops == -1) ? -1 : stack[tops];
}

int main() {
    int z;
    scanf("%d", &z);
    for (int i = 0; i < z; i++)
    {
        char a[10];
        scanf("%s", a);
        if (strcmp(a, "push") == 0)
        {
            int b;
            scanf("%d", &b);
            push(b);
        }
        else if (strcmp(a, "pop") == 0)
        {
            printf("%d\n", pop());
        }
        else if (strcmp(a, "size") == 0)
        {
            printf("%d\n", size());
        }
        else if (strcmp(a, "empty") == 0)
        {
            printf("%d\n", empty());
        }
        else if (strcmp(a, "top") == 0)
        {
            printf("%d\n", top());
        }
    }
}