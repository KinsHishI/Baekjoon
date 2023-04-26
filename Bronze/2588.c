#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b, a1, a2, a3;
    scanf("%d %d", &a, &b);
    a1 = a * (b % 10);
    a2 = a * ((b % 100 - b % 10) / 10);
    a3 = a * ((b - b % 100) / 100);
    printf("%d\n%d\n%d\n%d", a1, a2, a3, a3 * 100 + a2 * 10 + a1);

    return 0;
}