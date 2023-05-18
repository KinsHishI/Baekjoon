#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int factor = 2;
	long long int N;

	scanf("%lld", &N);

	while (1) {
		if (N == 1)
			break;

		if (N % factor == 0) {
			printf("%d\n", factor);
			N /= factor;
		}
		else
			factor++;
	}
}