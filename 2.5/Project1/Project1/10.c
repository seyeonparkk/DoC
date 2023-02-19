#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
struct human outhuman() {  //상속과 비슷
	struct human some = { "김상형",29,181.4 };
	return some;
}
int main() {
	struct human kim;
	kim = outhuman();
	printf(kim.name, kim.age, kim.height);
}