#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node* nodePointer;
typedef struct node {
	char data;
	nodePointer next;
	nodePointer prev;
} node;
nodePointer head, tail, cursor;

void init();
void MakeNode(char n);
void cursor_left();
void cursor_right();
void delete();
void PrintFirst();

int main(void) {
	int N;
	char n, command;

	init();

	while ((n = getchar()) != '\n')
		MakeNode(n);

	scanf("%d", &N);
	while (N--) {
		scanf("\n%c", &command);
		switch (command) {
			case 'L':
				cursor_left();
				break;
			case 'D':
				cursor_right();
				break;
			case 'B':
				delete();
				break;
			case 'P':
				scanf("\n%c", &n);
				MakeNode(n);
				break;
		}
	}

	PrintFirst();
}

void init() {
	head = (nodePointer)malloc(sizeof(node));
	tail = (nodePointer)malloc(sizeof(node));
	head->next = tail;
	head->prev = head;
	tail->next = tail;	
	tail->prev = head;
	cursor = head;
}

void MakeNode(char n) {
	nodePointer newNode = (nodePointer)malloc(sizeof(node));
	newNode->data = n;
	newNode->next = cursor->next;
	newNode->prev = cursor;
	cursor->next->prev = newNode;
	cursor->next = newNode;
	cursor = newNode;
}

void PrintFirst() {
	for (nodePointer temp = head->next; temp != tail; temp = temp->next)
		printf("%c", temp->data);
}

void cursor_left() {
	if (cursor != head)
		cursor = cursor->prev;
}

void cursor_right() {
	if (cursor != tail->prev)
		cursor = cursor->next;
}

void delete() { 
	if (cursor == head)
		return;
	nodePointer temp = cursor;
	cursor = cursor->prev;
	cursor->next = temp->next;
	temp->next->prev = cursor;
	free(temp);
}