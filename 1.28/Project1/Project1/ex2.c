#include<stdio.h>

int main() {
	int num1 = 10;
	int num2 = 20;

	int* ptr_1 = &num1;
	int* ptr_2 = &num2;

	if (ptr_1 == ptr_2)
		printf("ptr_1�� ptr_2 ���� �ּҰ��� ������ �ִ�");
	if (ptr_1 != ptr_2)
		printf("ptr_1�� ����Ű�� �ִ� �ּҰ� %d =n", *ptr_1);
	printf("ptr_2�� ����Ű�� �ִ� �ּҰ� %d =n", *ptr_2);
	printf("���� �ٸ� �ּҸ� ������ �ֽ��ϴ�");
	ptr_2 = ptr_1;
	return 0;
}