#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char str[1001];
	scanf("%s %d", str, &n);

	printf("%c", str[n - 1]);
}