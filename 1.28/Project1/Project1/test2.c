#include<stdio.h>
int main() {
	int st;
	int sum = 0;
	int num;

	printf("�л����� �Է��ϼ��� : ");
	scanf_s("%d", &st);

	int* arr = (int*)malloc(sizeof(int) * st);
	for (int i = 0; i < st; i++) {
		printf("%d�� �л��� ������ �Է��ϼ��� \n", i + 1);
		scanf_s("%d", &num);
	}
	
	
	sum += num;
	printf("���� %d", sum);
	printf("��� %d ", sum / st);
	free(arr);

	return 0;
}