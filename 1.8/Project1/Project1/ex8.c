#include<stdio.h>
void su(int a) {
	a += 5;
	printf("[1]%d\n", a);
}
void Num(int *b) {
	*b += 5;
	printf("[2]%d\n", *b);
}
void main() {
	int a;   //���� ���� [1]
	int b;   //���� ���� [2]

	a = 10;
	b = 5;
	su(a);
	Num(&b);

	printf("[3]%d\n", a);
	printf("[4]%d\n", b);
}