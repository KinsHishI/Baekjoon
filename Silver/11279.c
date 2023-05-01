#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int heap[100001];
int size = 0;

void swap(int* a, int* b);
void push(int num);
int pop();

int main(void) {
	int N, num;
	scanf("%d", &N);

	while (N--) {
		scanf("%d", &num);

		if (num == 0)
			printf("%d\n", pop());
		else
			push(num);
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void push(int num) {
	int index = ++size;

	while((index != 1) && (num > heap[index / 2])) {
		heap[index] = heap[index / 2];
		index /= 2;
	}

	heap[index] = num;
}

int pop() {
	if (size == 0)
		return 0;

	int value = heap[1];
	heap[1] = heap[size--];
	
	int parent = 1;
	int child;
	while (1) {
		child = parent * 2;
		
		if (child + 1 <= size && heap[child] < heap[child + 1])
			child++;

		if (child > size || heap[child] < heap[parent])
			break;

		swap(&heap[parent], &heap[child]);
		parent = child;
	}

	return value;
}