#include<stdio.h>
#include<stdlib.h>

int main() {

	int arr_1[5];
	int* arr_2;

	for (int i = 0; i < 5; i++) {
		arr_1[i] = i + 1;   //�迭�� ����
	}
	arr_2 = (int*)malloc(sizeof(int) * 5);   //�޸��Ҵ� �迭�� ũ�⸸ŭ �Ҵ��ϱ� ���� 5 ����

	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];   //�迭�� ����
		printf("%d", arr_2[i]);
	}

	printf("\n");
	
	realloc(arr_2, sizeof(int) * 10);   //40ũ��� �޸𸮸� ���Ҵ�
	//arr_2�� �޸� ũ�� 20����Ʈ->40
	return 0;

	for (int i = 0; i < 10; i++) {
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	free(arr_2);   //�޸� ����
}
