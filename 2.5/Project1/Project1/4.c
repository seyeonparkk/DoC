#include<stdio.h>
#include<stdlib.h>
#include<String.h>
typedef struct _per {
	char name[20];
	int age;
	char address[100];
}per;   //typedef�� ����Ͽ� ����ü�� ��Ī�� ���
int main() {
	per* p1 = malloc(sizeof(per));  //����ü ��Ī���� ������ ���� �޸��Ҵ�
	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "�����");
	printf("�̸� : %s\n", p1->name);
	printf("���� : %d\n", p1->age);
	printf("address : %s\n", p1->address);
}