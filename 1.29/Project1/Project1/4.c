#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<String.h>

struct Person {   //����ü ����
	char name[20];   //����ü ���1
	int age;
	char address[100];

};                                        
int main() {
	struct Person p1;  //����ü ���� ���� struct
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ���İ�");

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);
}