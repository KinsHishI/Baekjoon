#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int top = 0;
char stack[100];

int main(void) {
	int size;
	char str[100];

	while (1) {
		gets(str);

		if (strcmp(str, ".") == 0)
			break;

		size = strlen(str);
		for (int i = 0; i < size; i++) {
			if (str[i] == ' ' || ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
				continue;

			if (str[i] == '(' || str[i] == '[')
				stack[top++] = str[i];
			else if (str[i] == ')') {
				if (stack[top - 1] != '(' || top == 0) {
					top = -1000;
					break;
				}
				else
					stack[top--] = NULL;
			}
			else if (str[i] == ']') {
				if (stack[top - 1] != '[' || top == 0) {
					top = -1000;
					break;
				}
				else
					stack[top--] = NULL;
			}
		}
		if (top == 0)
			printf("yes\n");
		else
			printf("no\n");
		top = 0;
	}
}