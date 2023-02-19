#include<stdio.h>
#include<stdlib.h>
struct Data {
	char c1;
	int* numptr;
};
int main() {
	int num1 = 10;
	struct Data d1;
	struct Data* d2= malloc(sizeof(struct Data));

	d1.numptr = &num1;
	d2->numptr = &num1;

	printf("%d", *d1.numptr);  //구조체 멤버를 역참조(주소
	printf("%d", *d2->numptr);
	d2->c1 = 'a';
	printf("%c", (*d2).c1);  //a->구조체 포인터를 역참조하여 c1에 접근  d2->c1
	printf("%d", (*d2).numptr);  //10->구조체 포인터를 역참조하여 numptr에 접근한 뒤 다시 역참조 *d2->numptr
	free(d2);
}