#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N, count = 2;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		count += count - 1;

	printf("%d", count * count);
}