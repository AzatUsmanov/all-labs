#include<stdio.h>
#include<locale.h>
#include<math.h>
void rust(int n, int* a, int *b) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (j != i) {
				float c1 = (a[j] - a[i]) * (a[j] - a[i]) + (b[j] - b[i]) * (b[j] - b[i]);
				float c2 = pow(c1, 0.5);
				printf("%.3f ",c2);
			}
		}
		printf("\n");
	}

}
void print(char* str) {
	int i = 0; int f = 1;
	while (str[i])
	{
		if (str[i] == ' ')
			f = 1;
		else
			if ((str[i] == '.') || (str[i] == ',') || (str[i] == '!') ||
				(str[i] == ':') || (str[i] == '?') || (str[i] == ';'))
			{
				printf("%c", str[i]);
				f = 1;
			}

		else
		{
		  if (f && i)
		  printf(" ");
		  printf("%c", str[i]);
		  f = 0;
		}
		i++;
	}
}

int main() {
	setlocale(LC_ALL, "Rus");

	char string[80];
	printf("Введите строку символов\n");
	gets(string);
	print(string);
	printf("\n");
	int n;
	printf("Введите количество точек\n");
	scanf_s("%d", &n);
	int* b = (int*)malloc(n * sizeof(int));
	int* a = (int*)malloc(n * sizeof(int));
	printf("Введите координаты точек\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a[i], &b[i]);
	}
	rust(n, a, b);
	free(a);
	free(b);
}