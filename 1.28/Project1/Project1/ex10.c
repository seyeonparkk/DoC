#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[4] = { 4,3,2,1 };  //ũ�Ⱑ 4�� �迭 ����
	int* ar;   //��ƮŸ���� ����Ű�� ������

	//intŸ�� ������ *4��ŭ �޸𸮸� �Ҵ��϶�
	ar = (int*)malloc(sizeof(int) * 4);
	if (ar == NULL) {
		printf("malloc error");   //�޸� �Ҵ翡 ����
	}
	for (int i = 0; i < 4; ++i) {
		ar[i] = arr[i];
	}
	for (int i = 0; i < 4; ++i) {
		printf("%d", arr[i]);
	}
	free(ar);
}