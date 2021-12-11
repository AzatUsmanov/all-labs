#include <stdio.h>
#include <string.h>
int main()
{
	char s1[80];
	char s2[80];
	scanf("%s", s1);
	scanf("%s", s2);
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	int k = 0;
	char c = ' ';
	int i = 0;
	while (i < n1 && i < n2)
	{
		if (s1[i] == s2[i])
		{
			k++;
		}
		i++;
	}
	if (k == n1 && k == n2) {
		printf("=\n");
	}
	else { printf("!\n"); }
	strncpy(s1, s2, 2);
	printf("%s\n", s1);
	printf("long s2 = %d\n", n2);
	printf("enter index \n");
	int x;
	scanf("%d", &x);
	for (int i = 0; i < n1; i++) {
		if (s1[i] == s2[x]) { printf("%d\n", i); break; }
	}
	char s3[100];

	scanf(" %[^\n]s", s3);
	char str3[100];
	printf("enter string delimiters : \n");
	scanf(" %[^\n]s", str3);
	char* istr;

	istr = strtok(s3, str3);

	while (istr != NULL) {
		printf(" %s", istr);
		istr = strtok(NULL, str3);
	}
}