#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		sum += i;
	}
	printf("%d", sum);
}