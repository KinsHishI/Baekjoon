#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main(void) {
	int n, arr[10];
	scanf("%d", &n);

	while (n--) {
		for (int i = 0; i < 10; i++)
			scanf("%d", &arr[i]);
		qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
		printf("%d\n", arr[7]);
	}
}

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}