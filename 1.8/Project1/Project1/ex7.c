#include<stdio.h>
int get_number(int num) {
		printf("������ �Է����ּ��� :  ");
		scanf_s("%d", &num);
		if (num > 0) {
			return num;
		}
		else {
			while (1) {
				printf("������ �ٽ� �Է����ּ���");
			}
		}
	}

int main() {
	printf("get number => %d", get_number());
	return 0;
}
