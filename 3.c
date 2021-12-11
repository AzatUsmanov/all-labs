#include <stdio.h>
int main() {
int num1;
int num2, result, num4;
printf("enter num1 v 10: ");
scanf_s("%d", &num1);
printf("num1 v 16 : %x\n", num1);
num4 = num1 « 4;
printf("num1 v 16 - 4 left: %x\n", num4);
printf("enter num2 v 16: ");
scanf_s("%x", &num2);
result = num2 & num1;
printf("num1 & num2 v16: %x\n", result);
return 0;
}
