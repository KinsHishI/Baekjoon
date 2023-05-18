#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N, sum, index, arr[100001];
	while (1) {
		sum = 0, index = 0;
		scanf("%d", &N);
		
		if (N == -1)
			break;
		
		for (int i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
				arr[index++] = i;
			}
		}

		if (sum == N) {
			printf("%d = %d", N, arr[0]);
			for (int i = 1; i < index; i++)
				printf(" + %d", arr[i]);
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", N);
	}
}