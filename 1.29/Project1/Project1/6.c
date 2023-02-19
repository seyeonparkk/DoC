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
	struct Person p1;
	struct Person* ptr;  //포인터 변수로 선언

	ptr = &p1;  //p1 메모리주소를 구하여 ptr에 할당

	ptr->age = 30;  //화살표 연산자로 구조체 멤버에 접근하여 값 할당

	printf("나이 : %d\n", p1.age);   //나이 30 구조체 변수의 멤버 값 출력
	printf("나이 : %d\n", ptr->age);   //나이 30 구조체 포인터  멤버 값 출력


	return 0;
}