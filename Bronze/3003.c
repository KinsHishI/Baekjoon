#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int chess[6] = { 1,1,2,2,2,8 }, i, a;
    for (i = 0; i < 6; i++) {
        scanf("%d", &a);
        printf("%d ", chess[i] - a);
    }
    return 0;
}