#include <stdio.h>
int main() {
	int a[6];
	for (int i = 0; i < 6; i++) {
		scanf_s(" %d", &a[i]);

	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	int b[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			scanf_s(" %d", &b[i][j]);
	}
	printf("\n");
	int c[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			scanf_s(" %d", &c[i][j]);
	}

	int d[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int t = 0;
			for (int k = 0; k < 2; k++) {
				t += b[i][k] * c[k][j];
			}
			d[i][j] = t;
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", d[j][i]);
		}
		printf("\n");
	}
	return 0;

}