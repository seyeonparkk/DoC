#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
int main() {
	struct human kim = { "�����",29,181.4 };
	struct human* phu = &kim;
	printf("���� : %d", (*phu).age);




}


