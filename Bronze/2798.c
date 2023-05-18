#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N, M, sum, max = 0, arr[300001] = {0,};
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (max < sum && sum <= M)
					max = sum;
			}
		}
	}
	
	printf("%d", max);
}