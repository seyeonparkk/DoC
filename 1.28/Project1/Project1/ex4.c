#include<stdio.h>
main() {
	int i = 1234;
	int* pi = &i;
	double d = 3.14;
	double* pd = &d;

	printf(*pi);
	printf(*pd);

	pi = (int*)&d;
	printf("pi�� ���� d������ �� %d", *pi);
}