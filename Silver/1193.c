#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, n, sum, i = 1;
	scanf("%d", &n);


	while (1) {
		if (i * (i - 1) / 2 < n && n <= i * (i + 1) / 2)
			break;
		i++;
	}
	sum = i * (i + 1) / 2;
	a = sum - n;
	if (i % 2 == 0)
		printf("%d/%d", i - a, a + 1);
	else if (i % 2 == 1)
		printf("%d/%d", a + 1, i - a);
}