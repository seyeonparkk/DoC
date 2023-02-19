#include<stdio.h>
int main() {
	/**->포인터 변수선언
	&->포인터 대입*/

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

	printf("변수 i주소값 : %p", &i);
	printf("포인터 p값: %p", p);
	printf("포인터 p가 가리키는 값 : %p", *p);

	
	return 0;
}
