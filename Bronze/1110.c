#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e, count = 0;
	scanf("%d", &a);
	e = a;
	while (1) {
		count++;

		b = e / 10;
		if (e < 10)
			b = 0;
		c = e % 10;
		d = b + c;

		if (d >= 10)
			d %= 10;

		e = 10 * c + d;

		if (a == e) {
			printf("%d", count);
			break;
		}

	}
}