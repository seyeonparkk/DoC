#include<stdio.h>
#include<stdlib.h>
#include<String.h>
typedef struct _per {
	char name[20];
	int age;
	char address[100];
}per;   //typedef를 사용하여 구조체의 별칭을 사용
int main() {
	per* p1 = malloc(sizeof(per));  //구조체 별칭으로 포인터 선언 메모리할당
	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시");
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("address : %s\n", p1->address);
}