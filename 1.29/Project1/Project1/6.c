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
	struct Person* ptr;  //������ ������ ����

	ptr = &p1;  //p1 �޸��ּҸ� ���Ͽ� ptr�� �Ҵ�

	ptr->age = 30;  //ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�

	printf("���� : %d\n", p1.age);   //���� 30 ����ü ������ ��� �� ���
	printf("���� : %d\n", ptr->age);   //���� 30 ����ü ������  ��� �� ���


	return 0;
}