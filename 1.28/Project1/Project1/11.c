#include<stdio.h>
#include<stdlib.h>

int main() {
	int size;
	printf("�迭�� ������ : ");
	scanf_s("%d", &size);

	int* arr = (int*)malloc(sizeof(int)*size);   //�����Ҵ�

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	free(arr);


}
