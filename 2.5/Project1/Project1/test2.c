#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
void outHuman(struct human *some) {
	printf("%s : %d�� Ű : %.2f\n", some->name, some->height);
	some->age = 40;
	
}
int main() {
	struct human kim = { "�����",29,181.4 };
	outHuman(&kim);
	printf(kim.age);
}