#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main(void) {
	int N, M, index = 0;
	char name[500001][21];
	char ans[500001][21];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N + M; i++)
		scanf("%s", name[i]);
	
	qsort(name, N + M, sizeof(name[0]), compare);

	for (int i = 0; i < N + M; i++) {
		if (strcmp(name[i], name[i + 1]) == 0)
			strcpy(ans[index++], name[i++]);
	}
	printf("%d\n", index);
	for (int i = 0; i < index; i++)
		printf("%s\n", ans[i]);

}

int compare(const void* a, const void* b) {
	return (strcmp((char*)a, (char*)b));
}