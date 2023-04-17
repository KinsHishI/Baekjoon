#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int arr[1000001] = { 0, };

int main(void) {
	int n, size, index = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	size = n;
	while (1) {
		if (size == 1)
			break;
		
		if (index % 2 == 1)
			size--;
		else if (index % 2 == 0)
			arr[++n] = arr[index];

		index++;
	}
	printf("%d", arr[n]);
}