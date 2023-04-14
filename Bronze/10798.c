#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int count, max = 0;
	char arr[5][16] = { NULL, };

	for (int i = 0; i < 5; i++) {
		count = 0;
		scanf("%s", arr[i]);
		count = strlen(arr[i]);
		if (max < count)
			max = count;
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == NULL)
				continue;
			printf("%c", arr[j][i]);
		}
	}
}