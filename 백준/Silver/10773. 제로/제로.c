#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100001
#define ERROR -1
#define TRUE 1
#define FALSE 0

typedef int element;

typedef struct ArrayStack {
    element stack[MAX_SIZE];
    int top;
}Stack;

Stack* create() {
    Stack* S = (Stack*)malloc(sizeof(Stack));
    if (S == NULL) {
        exit(EXIT_FAILURE);
    }
    S->top = -1;
    return S;
}


int isFull(Stack* S) {
    return S->top == MAX_SIZE - 1;
}

int isEmpty(Stack* S) {
    return S->top == -1;
}

void push(Stack* S, element x) {
    if (isFull(S)) {
        printf("[ERROR] Stack is FULL! \n");
        return;
    }
    else {
        S->top += 1;
        S->stack[S->top] = x;
    }
}

element pop(Stack* S) {
    if (isEmpty(S)) {
        printf("[ERROR] Stack is EMPTY! \n");
        return ERROR;
    }
    else {
        element e = S->stack[S->top];
        //printf("Delete : %d \n", e);
        S->top -= 1;
        return e;
    }
}

void sum(Stack* S) {
    int sum = 0;

    for (int i = 0; i <= S->top; i++)
        sum += S->stack[i];
    printf("%d", sum);
}

int main() {
    Stack* S;
    element item;
    S = create();

    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        int number;
        scanf("%d", &number);
        if (number == 0) {
            pop(S);
        }
        else {
            push(S, number);
        }
    }

    sum(S);

    free(S);

    return 0;
}