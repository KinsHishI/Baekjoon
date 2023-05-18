#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, N, M, q, *temp;
	scanf("%d %d %d", &N, &M, &q);
	
	int** arr = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		arr[i] = (int*)malloc(sizeof(int) * M);
		for (int j = 0; j < M; j++)
			scanf("%d", &arr[i][j]);
	}

	int i, j, k;
	for (int l = 0; l < q; l++) {
		scanf("%d %d %d", &a, &i, &j);

		if (a == 0) {
			scanf("%d", &k);
			arr[i][j] = k;
		}
		else if (a == 1) {
			temp = (int*)malloc(sizeof(int)* M);
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}