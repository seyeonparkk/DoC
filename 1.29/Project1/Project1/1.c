#include<stdio.h>
#include<stdlib.h>

int main() {

	int arr_1[5];
	int* arr_2;

	for (int i = 0; i < 5; i++) {
		arr_1[i] = i + 1;   //배열값 대입
	}
	arr_2 = (int*)malloc(sizeof(int) * 5);   //메모리할당 배열의 크기만큼 할당하기 위해 5 곱함

	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];   //배열값 대입
		printf("%d", arr_2[i]);
	}

	printf("\n");
	
	realloc(arr_2, sizeof(int) * 10);   //40크기로 메모리를 재할당
	//arr_2의 메모리 크기 20바이트->40
	return 0;

	for (int i = 0; i < 10; i++) {
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	free(arr_2);   //메모리 해제
}
