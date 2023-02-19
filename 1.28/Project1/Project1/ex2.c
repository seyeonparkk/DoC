#include<stdio.h>

int main() {
	int num1 = 10;
	int num2 = 20;

	int* ptr_1 = &num1;
	int* ptr_2 = &num2;

	if (ptr_1 == ptr_2)
		printf("ptr_1과 ptr_2 같은 주소값을 가지고 있다");
	if (ptr_1 != ptr_2)
		printf("ptr_1이 가리키고 있는 주소값 %d =n", *ptr_1);
	printf("ptr_2이 가리키고 있는 주소값 %d =n", *ptr_2);
	printf("현재 다른 주소를 가지고 있습니다");
	ptr_2 = ptr_1;
	return 0;
}