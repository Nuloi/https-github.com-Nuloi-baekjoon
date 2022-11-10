#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int element;
typedef struct {
	int front;
	int rear;
	element* data;
}QueueType;

void init_queue(QueueType* q) {
	q->front = q->rear = 0;
}

void enqueue(QueueType* q, element item, int n) {
	q->rear = (q->rear + 1) % n;
	q->data[q->rear] = item;

}

element dequeue(QueueType* q, int n) {
	q->front = (q->front + 1) % n;
	return q->data[q->front];
}

int main() {
	int n, i, back;
	QueueType q;
	init_queue(&q);

	scanf(" %d", &n);
	q.data = (element*)malloc((n + 1) * sizeof(element));

	for (i = 1; i <= n; i++)
		enqueue(&q, i, n + 1);

	for (i = 1; i < n; i++) {
		dequeue(&q, n + 1);
		back = dequeue(&q, n + 1);
		enqueue(&q, back, n + 1);
	}

	printf("%d", q.data[(q.front + 1) % (n + 1)]);

	free(q.data);
}