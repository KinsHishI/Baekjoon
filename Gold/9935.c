#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001], ans[1000001], explosion[37];
    scanf("%s %s", str, explosion);

    int len = strlen(str), exp_len = strlen(explosion), index = 0;
    for (int i = 0; i < len; i++) {
        ans[index++] = str[i];
             
        if (index >= exp_len) {
            int temp = index - exp_len, j;
            for (j = temp; j < index; j++)
                if (ans[j] != explosion[j - temp])
                    break;

            index -= (j == index ? exp_len : 0);
        }
    }
    ans[index] = '\0';
    printf("%s", index ? ans : "FRULA");
}