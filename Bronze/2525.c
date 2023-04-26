#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, cap;
	scanf("%d %d %d", &a, &b, &c);
	cap = b + c;
	while (1) {
		if (cap < 60) {
			printf("%d %d", a, cap);
			break;
		}
		else if (cap == 60) {
			if (a == 23) {
				printf("%d %d", 0, 0);
				break;
			}
			else {
				printf("%d %d", a + 1, 0);
				break;
			}
		}
		else {
			if (a == 23)
				a = 0;
			else
				a++;
			cap = cap - 60;
		}
	}
}