#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	int n, size;
	char str[1001];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		size = strlen(str);
		printf("%c%c\n", str[0], str[size - 1]);
	}
}