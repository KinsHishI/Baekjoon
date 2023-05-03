#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int N, M, begin, end, mid;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N + 1);
	int* tmp = (int*)malloc(sizeof(int) * N + 1);
	for (int i = 1; i <= N; i++)
		arr[i] = i;

	while (M--) {
		scanf("%d %d %d", &begin, &end, &mid);

		for (int i = begin; i <= end; i++)
			tmp[i] = arr[i];

		int indexArr = begin, indexTmp = mid;
		while (1) {
			arr[indexArr++] = tmp[indexTmp++];

			if (indexTmp == end + 1)
				indexTmp = begin;
			if (indexTmp == mid)
				break;
		}
	}

	for (int i = 1; i <= N; i++)
		printf("%d ", arr[i]);
}