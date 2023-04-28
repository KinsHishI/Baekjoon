#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void PrintStar(int i, int j, int N);

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			PrintStar(i, j, N);
		printf("\n");
	}
	return 0;
}

void PrintStar(int i, int j, int N) {
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1)
		printf(" ");
	else if (N / 3 == 0)
		printf("*");
	else
		PrintStar(i, j, N / 3);
}