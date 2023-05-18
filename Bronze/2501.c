#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N, K, index = 1, arr[10001] = { 0, };

	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0)
			arr[index++] = i;
	}

	printf("%d", arr[K]);
}