#include<stdio.h>
struct Person {
	char name;
	int age;
	char address[100];
};
int main() {
	struct Person p1;    //구조체 변수 선언
	struct Person* ptr;   //구조체 포인터 변수 선언

	ptr = &p1;  //p1의 메모리 주소를 구하여 ptr에 할당
	ptr->age = 30;   //화살표 연산자로 구조체 멤버에 접근하여 값을 할당

	printf("age : %d\n", p1.age);
	printf("age : %d\n", ptr->age);

}