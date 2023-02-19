#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<String.h>

struct Person {   //구조체 정리
	char name[20];   //구조체 멤버1
	int age;
	char address[100];

};                                        
int main() {
	struct Person p1;  //구조체 변수 선언 struct
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 송파고");

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);
}