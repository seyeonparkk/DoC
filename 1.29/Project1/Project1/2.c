#include<stdio.h>
#include<stdlib.h>

int main() {
	int size;
	printf("�迭�� ������ ");
	scanf_s("%d", &size);
	
	//size��ŭ �迭�� ���� �����Ҵ�
	int** arr = (int**)malloc(sizeof(int*) * size);

	//size��ŭ �迭�� ���� �����Ҵ�
	for (int i = 0; i < size; i++) {
		arr[i] = (int*)malloc(sizeof(int) * size);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = i + j;
		}
	}

	//�迭�� �� ���
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("arr[%d][%d] : %d", i, j, arr[i][j]);
		}
		printf("\n");
	}

	//�޸�����

	for (int i = 0; i < size; i++) {
		free(arr[i]);
	}
	free(arr);
}