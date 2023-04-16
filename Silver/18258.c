#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main(void) {
	long int n, value;
	int front = -1, back = -1, queue[2000001] = { 0, };
	char str[10];

	scanf("%d", &n);

	while (n--) {
		scanf("%s", str);
		if (strcmp(str, "push") == 0) {
			scanf("%d", &value);
			queue[++back] = value;
		}
		else if (strcmp(str, "pop") == 0)
			printf("%d\n", front != back ? queue[++front] : -1);
		else if (strcmp(str, "size") == 0)
			printf("%d\n", back - front);
		else if (strcmp(str, "empty") == 0)
			printf("%d\n", front == back ? 1 : 0);
		else if (strcmp(str, "front") == 0)
			printf("%d\n", front != back ? queue[front + 1] : -1);
		else if (strcmp(str, "back") == 0)
			printf("%d\n", front != back ? queue[back] : -1);
	}
}