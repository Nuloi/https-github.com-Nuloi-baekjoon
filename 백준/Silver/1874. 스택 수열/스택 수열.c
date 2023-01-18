#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	int stack[num];
    int n = 1, top = -1, result_index = 0;
    char result[num*2];
    int* arr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int index = 0;

    while (1){
        if (top == -1 || stack[top] < arr[index]){
            stack[++top] = n++;
            result[result_index++] = '+';

        }
        else if (stack[top] == arr[index]){
            top--;
            index++;
            result[result_index++] = '-';

        }
        else{
            printf("NO\n");
            return 0;
        }

        if (index == num) break;
    }

    for (int i = 0; i < result_index; i++){
        printf("%c\n", result[i]);
    }
}