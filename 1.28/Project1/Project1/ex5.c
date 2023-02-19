#include<stdio.h>
int main() {
	int arr[] = { 11,12,13,14,15 };
	int* pi = arr;

	printf("첫 번째 요소=%d \n", *pi);
	pi++;
	printf("두 번째 요소=%d \n", *pi);
	return 0;
}