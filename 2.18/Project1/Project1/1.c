#include<stdio.h>
typedef struct {
	char name[30];
	int age;
}per;
int main() {
	per boy = { "호날두",35 };
	per* ptr = &boy;

	// 기호가 다를뿐 목적은 같다
	printf("%s(%d)", (*ptr).name, (*ptr).age);
	printf("%s(%d)", ptr->name, ptr->age);
}