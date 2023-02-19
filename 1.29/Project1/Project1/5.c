#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};
int main() {
	struct Person* p1 = malloc(sizeof(struct Person));  //구조체 변수 포인터 
	strcpy(p1->name, "홍길동");  //포인터는 가르키는 것이기 때문에 ->사용 즉 포인터는 .이 아닌 화살표
	p1->age = 30;
	strcpy(p1->address, "서울시 ");


	printf("%s\n", p1->name);
	printf("%d\n", p1->age);
	printf("%s\n", p1->address);

	free(p1);
	return 0;

}