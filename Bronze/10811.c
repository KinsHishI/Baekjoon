#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int N, M, a, b, temp;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N + 1);
	for (int i = 1; i <= N; i++)
		arr[i] = i;

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);

		while (1) {
			if (a >= b)
				break;
			temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;

			a++;
			b--;
		}
	}

	for (int i = 1; i <= N; i++)
		printf("%d ", arr[i]);
}