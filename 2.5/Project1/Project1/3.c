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

	printf("%d", *d1.numptr);  //����ü ����� ������(�ּ�
	printf("%d", *d2->numptr);
	d2->c1 = 'a';
	printf("%c", (*d2).c1);  //a->����ü �����͸� �������Ͽ� c1�� ����  d2->c1
	printf("%d", (*d2).numptr);  //10->����ü �����͸� �������Ͽ� numptr�� ������ �� �ٽ� ������ *d2->numptr
	free(d2);
}