#include<stdio.h>
#include<malloc.h>
struct human {
	char *name;
	int age;
	double height;
};
int main() {

	
		struct human kim = { NULL,30,160 };
		kim.name = (char*)malloc(30);
		strcpy(kim.name, "������");

		struct human lee = kim;
		lee.name = (char*)malloc(30);
		strcpy(lee.name, "�̼���");

	


	printf("%s : %d�� Ű : %.2f", kim.name, kim.age, kim.height);
	printf("%s : %d�� Ű : %.2f", lee.name, lee.age, lee.height);

	free(kim.name);
	free(lee.name);

	return 0;
}