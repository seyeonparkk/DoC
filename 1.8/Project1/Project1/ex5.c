#include<stdio.h>
int max(int x,int y) {    //int->�Է��� �޴� ����
	if (x > y) return x;
	else return y;
}
void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", max(a, b));
}