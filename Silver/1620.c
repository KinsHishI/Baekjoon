#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pokemon {
	char name[50];
	int num;
} pokemon;

int compare(const pokemon* a, const pokemon* b);

int main(void) {
	int N, M;
	char op[50];

	scanf("%d %d", &N, &M);

	pokemon* pokedex = (pokemon*)malloc(sizeof(pokemon) * N);
	pokemon* pokedex_copy = (pokemon*)malloc(sizeof(pokemon) * N);

	for (int i = 0; i < N; i++) {
		scanf("%s", pokedex[i].name);
		strcpy(pokedex_copy[i].name, pokedex[i].name);
		pokedex[i].num = pokedex_copy[i].num = i + 1;
	}

	qsort(pokedex_copy, N, sizeof(pokemon), compare);
	
	for (int i = 0; i < M; i++) {
		scanf("%s", op);
		if (atoi(op))
			printf("%s\n", pokedex[atoi(op) - 1].name);
		else {
			int left = 0, right = N - 1, mid, value;
			while (left <= right) {
				mid = (left + right) / 2;
				if (strcmp(pokedex_copy[mid].name, op) == 0) break;
				else if (strcmp(pokedex_copy[mid].name, op) > 0) right = mid - 1;
				else left = mid + 1;
			}
			printf("%d\n", pokedex_copy[mid].num);
		}
	}
}

int compare(const pokemon* a, const pokemon* b) {
	return strcmp(a->name, b->name);
}