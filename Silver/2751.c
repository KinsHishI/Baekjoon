#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int sorted[1000000];
void mergeSort(int arr[], int start, int end);
void merge(int arr[], int start, int middle, int end);

int main(void) {
	int i, N, arr[1000000];
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	mergeSort(arr, 0, N - 1);

	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}

void mergeSort(int arr[], int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;
		mergeSort(arr, start, middle);
		mergeSort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}

void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}

	if (i > mid) {
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	else {
		for (l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}

	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
}