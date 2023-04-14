#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);
	int* arr = (int*)calloc(N + 1, sizeof(int));

	while (M--) {
		scanf("%d %d %d", &i, &j, &k);
		while (i <= j)
			arr[i++] = k;
	}
	
	for (int i = 1; i <= N; i++)
		printf("%d ", arr[i]);
}