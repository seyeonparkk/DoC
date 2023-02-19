#include<stdio.h>
#include<stdlib.h>

int main() {
	int size;
	printf("배열의 사이즈 : ");
	scanf_s("%d", &size);

	int* arr = (int*)malloc(sizeof(int)*size);   //동적할당

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	free(arr);


}
