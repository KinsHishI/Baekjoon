#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n, x1, y1, r1, x2, y2, r2;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int sum = r1 + r2;
        int difference = abs(r1 - r2);
        double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

        if (d == 0 && r1 == r2)
            printf("-1\n");

        else if (d == sum || d == difference)
            printf("1\n");

        else if (difference < d && d < sum)
            printf("2\n");

        else
            printf("0\n");
    }

    return 0;
}