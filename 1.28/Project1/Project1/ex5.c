#include<stdio.h>
int main() {
	int arr[] = { 11,12,13,14,15 };
	int* pi = arr;

	printf("ù ��° ���=%d \n", *pi);
	pi++;
	printf("�� ��° ���=%d \n", *pi);
	return 0;
}