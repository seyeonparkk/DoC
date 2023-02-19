#include<stdio.h>
int one() {
	float a = 1.1f;
	return (int)a;
}
void main() {
	int num1;
	num1 = one();
	printf("%d\n", num1);
	return 0;
}