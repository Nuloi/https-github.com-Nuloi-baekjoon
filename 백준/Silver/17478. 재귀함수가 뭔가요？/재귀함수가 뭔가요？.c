#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int lineplus(int a) {
    if (a == 0) {
        return 0;
    }
    printf("____");
    return lineplus(a - 1);
}
int lineminus(int a) {
    if (a == 0) {
        return 0;
    }
    printf("____");
    return lineminus(a - 1);
}

int say(int a) {
    if (a == -1) {
        return 0;
    }
    lineminus(a);
    printf("라고 답변하였지.\n");
    return say(a - 1);
}

int re(int a, int b) {
    lineplus(a);
    printf("\"재귀함수가 뭔가요?\"\n");
    if (a == b) {
        lineplus(a);
        printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        say(a);
        return 0;
    }
    else {
        lineplus(a);
        printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
        lineplus(a);
        printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
        lineplus(a);
        printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
    }
    return re(a + 1, b);
}

int main(void) {
    int a;
    scanf("%d", &a);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    re(0, a);

}
