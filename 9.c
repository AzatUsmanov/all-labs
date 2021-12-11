#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	float pr, ap, smsl;
	printf("Введите продолжительность разговоров\n");
	scanf_s("%f", &pr);
	printf("Введите величину абонентской платы\n");
	scanf_s("%f", &ap);
	printf("Введите стоимость минуты сверх лимита\n");
	scanf_s("%f", &smsl);
	if (pr <= 499) { printf("стоимость абонентской платы %.3f\n", ap); }
	else
	{
		float s; s = ap + (pr - 499) * smsl;
		{ printf("стоимость абонентской платы %f\n", s); }
	}
	float m, p, s;
	printf("Введите количество месяцев\n");
	scanf_s("%f", &m);
	printf("Введите количества процентов\n");
	scanf_s("%f", &p);
	printf("Введите размер вклада\n");
	scanf_s("%f", &s);
	for (int i = 1; i < m + 1; i++)
	{
		s = s + s * (p / 100);
		printf("После %d месяцев вы имеете : %.3f\n", i, s);
	}
}