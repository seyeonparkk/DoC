#include<stdio.h>
#include<stdlib.h>
//2���� �����Ҵ�
int main() {
	int size;
	printf("�迭�� ������ �Է�");
	scanf_s("%d", &size);
	int** arr=(int**)malloc(sizeof(int*) * size);
	
		for (int i = 0; i < size; i++) {
			arr[i] = (int*)malloc(sizeof(int) * size);
		}
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				arr[i][j]=i + j;
			}
		}

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				printf("arr[%d][%d] : %d", i, j, arr[i][j]);
			}
		}
		for (int i = 0; i < size; i++) {
			free(arr[i]);
		}
		free(arr);
	system("pause");
	return 0;
}