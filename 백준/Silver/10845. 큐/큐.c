#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUS_SIZE 100000
typedef int element;
element queus[MAX_QUEUS_SIZE];
int head = 0;
int tail = 0;

void push(element item)
{
    queus[head++] = item;
}

element pop() {
    if (head!=tail)
    {
        int dumitail = queus[0];
        for (int i = 0; i < head; i++)
        { 
            queus[i] = queus[i + 1];
        }
        head--;
        return dumitail;
    }
    else
    {
        return -1;
    }
}

element size() {
    return head;
}

element empty() {
    if (head != 0) {
        return 0;
    }
    else {
        return 1;
    }
}
element front() {
    if (head != 0) {
        return queus[tail];
    }
    return -1;
}
element back() {
    if (head != 0) {
        return queus[head - 1];
    }
    return -1;
}

int main() {
    int z;
    scanf("%d", &z);
    for (int i = 0; i < z; i++)
    {
        char a[30];
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