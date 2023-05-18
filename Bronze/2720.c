#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N, value;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int quarter = 0, dime = 0, nickel = 0, penny = 0;
		scanf("%d", &value);
		if (value / 25 > 0) {
			quarter = value / 25;
			value -= quarter * 25;
		}
		if (value / 10 > 0) {
			dime = value / 10;
			value -= dime * 10;
		}
		if (value / 5 > 0) {
			nickel = value / 5;
			value -= nickel * 5;
		}

		printf("%d %d %d %d\n", quarter, dime, nickel, value);
	}
}