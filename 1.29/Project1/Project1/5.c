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
	struct Person* p1 = malloc(sizeof(struct Person));  //����ü ���� ������ 
	strcpy(p1->name, "ȫ�浿");  //�����ʹ� ����Ű�� ���̱� ������ ->��� �� �����ʹ� .�� �ƴ� ȭ��ǥ
	p1->age = 30;
	strcpy(p1->address, "����� ");


	printf("%s\n", p1->name);
	printf("%d\n", p1->age);
	printf("%s\n", p1->address);

	free(p1);
	return 0;

}