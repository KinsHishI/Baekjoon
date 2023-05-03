#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int A, B, index = 1, count = 1, sum = 0;
	int arr[1001];

	for (int i = 1; i <= 44; i++) {
		while (1) {
			arr[index++] = i;
			if (i == count)
				break;
			count++;
		}
		count = 1;
	}

	while (index <= 1000)
		arr[index++] = 45;

	scanf("%d %d", &A, &B);
	for (int i = A; i <= B; i++)
		sum += arr[i];
	printf("%d", sum);
}