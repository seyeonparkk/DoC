#include<stdio.h>
typedef struct {
	char name[30];
	int age;
}per;
int main() {
	per boy = { "ȣ����",35 };
	per* ptr = &boy;

	// ��ȣ�� �ٸ��� ������ ����
	printf("%s(%d)", (*ptr).name, (*ptr).age);
	printf("%s(%d)", ptr->name, ptr->age);
}