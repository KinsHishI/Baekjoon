#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n = 1, count = 1;
	long long N;

	scanf("%llu", &N);

	while (1) {
		if (N - n <= 0)
			break;
		N -= n;
		n = count * 6;
		count++;
	}

	printf("%d", count);
}