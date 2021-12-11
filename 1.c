#include <stdio.h>
#define SIZE 51

int main() {
	int number;
	char sig;
	char massiv[50];
        fscanf(stdin, "%[^\n]", massiv);
        fprintf(stdout, "%s\n", massiv);
	scanf("%d\n", &number);
	printf("%d\n", number);
	scanf("%c", &sig);
	printf("%c\n", sig);
	return 0;
}