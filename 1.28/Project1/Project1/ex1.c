#include<stdio.h>
int main() {
	/**->������ ��������
	&->������ ����*/

	/*int a = 5;
	int b = 10;
	int* ptr;
	int* ptr2;
	
	ptr = &a;
	ptr2 = &b;
	printf("b-a=%d", *ptr2 = *ptr);*/

	int* p = NULL;
	int i = 10;
	p = &i;

	printf("���� i�ּҰ� : %p", &i);
	printf("������ p��: %p", p);
	printf("������ p�� ����Ű�� �� : %p", *p);

	
	return 0;
}
