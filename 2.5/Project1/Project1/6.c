#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
int main() {
	struct human kim = { "±è»óÇü",29,181.4 };
	struct human* phu = &kim;
	printf("³ªÀÌ : %d", (*phu).age);




}


