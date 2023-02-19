#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[4] = { 4,3,2,1 };  //크기가 4인 배열 선언
	int* ar;   //인트타입을 가르키는 포인터

	//int타입 사지으 *4만큼 메모리를 할당하라
	ar = (int*)malloc(sizeof(int) * 4);
	if (ar == NULL) {
		printf("malloc error");   //메모리 할당에 실패
	}
	for (int i = 0; i < 4; ++i) {
		ar[i] = arr[i];
	}
	for (int i = 0; i < 4; ++i) {
		printf("%d", arr[i]);
	}
	free(ar);
}