#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
void outHuman(struct human some) {
	printf("%s : %d�� %.2f\n", some.name, some.height);
}
int main() {
	struct human kim = { "�����",29,181.4 };
	outHuman(kim);
}