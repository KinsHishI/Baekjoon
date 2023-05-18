#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    int N, len;
    char NUM[101];
    long long int ans = 0;

    scanf("%s %d", NUM, &N);

    len = strlen(NUM);

    for (int i = len - 1; i >= 0; i--) {
        int value;

        if ('A' <= NUM[i] && NUM[i] <= 'Z')
            value = NUM[i] - 'A' + 10;
        else
            value = NUM[i] - '0';

        ans += (value * pow(N, len - 1 - i));
    }

    printf("%lld", ans);
}