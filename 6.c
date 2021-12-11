#include <stdio.h>
int main() {
	int a[4];
	for (int i = 0; i < 4; i++) {
		scanf_s(" %d", a + i);
	}
	int* pa = a;
	for (int i = 0; i < 4; i++) {
		printf("%d ", *(pa + i));
	}
	printf("\n");
	int* b = NULL;
	b = malloc(sizeof(int) * 4);
	b = realloc(b, 20 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", b + i);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(b + i));
	}
	free(b);
	b = NULL;
	return 0;
}