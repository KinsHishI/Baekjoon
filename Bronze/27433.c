#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n, i;
	long long mul = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		mul *= i;
	printf("%llu", mul);
}