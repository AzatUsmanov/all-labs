#include <stdio.h>
int main() {
int a;
unsigned int b, c;
scanf_s("%d", &a);
while (32 < a && a < 89) {
printf("Yes\n");
break;
}
while (33 > a || a > 88) {
printf("No\n");
break;
}
printf("enter number v 10: \n");
scanf_s("%d", &c);
c = c » 19;
b = c % 2;
printf("%d", b);
return 0;
}