#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	long long int n;
	scanf("%lld", &n);
	printf("%lld\n%lld", n * (n - 1) / 2, 2);
}