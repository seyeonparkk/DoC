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
		strcpy(kim.name, "김유신");

		struct human lee = kim;
		lee.name = (char*)malloc(30);
		strcpy(lee.name, "이순신");

	


	printf("%s : %d세 키 : %.2f", kim.name, kim.age, kim.height);
	printf("%s : %d세 키 : %.2f", lee.name, lee.age, lee.height);

	free(kim.name);
	free(lee.name);

	return 0;
}