#include <stdio.h>
#include <stdlib.h>

int array[100001];// array[n]에는 n이랑 연결된 노드 개수 추가
int brray[100001];

typedef struct node
{
	int data;
	struct node* next;
}Node;

Node* Array[100001];

void Find(int n) {4
	Node* cur = Array[n];

	for (int i = 1; i <= array[n]; i++) {
		cur = cur->next;
		if (brray[cur->data] == 0) {
			brray[cur->data] = n;
			Find(cur->data);
		}
	}

	return;
}

int main(void) {
	int i, j, N;
	int x, y;
	int count = 0;
	Node* cur;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		Array[i] = (Node*)malloc(sizeof(Node));
		Array[i]->next = NULL;
	}

	for (i = 0; i < N - 1; i++)
	{
		scanf("%d %d", &x, &y);

		array[x]++;//array[x]에는 그 성분과 연결된 노드의 개수를 저장
		cur = Array[x];
		for (j = 0; j < array[x] - 1; j++)
		{
			cur = cur->next;
		}
		cur->next = (Node*)malloc(sizeof(Node));
		cur->next->data = y;
		cur->next->next = NULL;

		array[y]++;
		cur = Array[y];
		for (j = 0; j < array[y] - 1; j++)
		{
			cur = cur->next;
		}
		cur->next = (Node*)malloc(sizeof(Node));
		cur->next->data = x;
		cur->next->next = NULL;
	}

	Find(1);

	for (i = 2; i <= N; i++)
	{
		printf("%d\n", brray[i]);
	}


	return 0;
}