#include<stdio.h>
int max(int x,int y) {    //int->입력을 받는 아이
	if (x > y) return x;
	else return y;
}
void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", max(a, b));
}