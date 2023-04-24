#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char arr[101];

	while (fgets(arr, sizeof(arr), stdin) != EOF)
		printf("%s", arr);

	return 0;
}