#include <stdio.h>
#include <math.h>

int main() {
	float alpha, z1, z2, alpha0, op1, op2, op3, beta, pi = 3.1415926;
	scanf("%f", &alpha);
	alpha0 = alpha;
	alpha = alpha * pi / 180;
	beta = 45 * pi / 180;
	z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
	printf("%f\n", z1);
	z2 = 2 * sqrt(2) * cos(alpha) * sin(2 * alpha + beta);
	printf("%f\n", z2);
	op1 = round(alpha0) + trunc(alpha0);
	op2 = pow(alpha0,2) - sqrt(alpha0);
	op3 = log10(alpha0);
	printf("%f %f %f ", op1, op2,op3);
	return 0;
}