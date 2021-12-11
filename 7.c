#include<stdio.h>
#include<math.h>
struct coordinate {
	float X;
	float Y;
};

struct Triangle {
	struct coordinate A;
	struct coordinate B;
	struct coordinate C;
};
enum Color { watercolor, oil, waterbased };
union Cardreader {
	int value;
	struct Keys {
		unsigned switched_on : 1;
		unsigned SD_card_active : 1;
		unsigned Compact_Flash_card_active : 1;
		unsigned active_MemoyStick_card : 1;
	} condition;
};
int main() {
	printf("Enter the coordinates of the vertices of the triangle on the plane:\n");
	struct Triangle M;
	scanf_s("%f %f", &M.A.X, &M.A.Y);
	scanf_s("%f %f", &M.B.X, &M.B.Y);
	scanf_s("%f %f", &M.C.X, &M.C.Y);
	float AB = sqrt(pow(M.B.X - M.A.X, 2) + pow(M.B.Y - M.A.Y, 2));
	float BC = sqrt(pow(M.C.X - M.B.X, 2) + pow(M.C.Y - M.B.Y, 2));
	float CA = sqrt(pow(M.A.X - M.C.X, 2) + pow(M.A.Y - M.C.Y, 2));
	float p = AB + BC + CA;
	printf("Perimeter ABC = %f\n", p);
	enum Color x;
	x = oil;
	printf("%d\n", x);
	union Cardreader curr_condition;
	int new_value;

	printf("Введите число в 16-ой с.с.: ");
	scanf_s("%x", &new_value);

	curr_condition.value = new_value;
	printf("\n Состояние switched_on: %s", (curr_condition.condition.switched_on) ? "ON" : "OFF");
	printf("\n Состояние SD_card_active: %s", (curr_condition.condition.SD_card_active) ? "ON" : "OFF");
	printf("\n Состояние Compact_Flash_card_active: %s", (curr_condition.condition.Compact_Flash_card_active) ? "ON" : "OFF");
	printf("\n Состояние active_MemoyStick_card: %s", (curr_condition.condition.active_MemoyStick_card) ? "ON" : "OFF");
	return 0;
}