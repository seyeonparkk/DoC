#include<stdio.h>
int get_number(int num) {
		printf("정수를 입력해주세요 :  ");
		scanf_s("%d", &num);
		if (num > 0) {
			return num;
		}
		else {
			while (1) {
				printf("정수를 다시 입력해주세요");
			}
		}
	}

int main() {
	printf("get number => %d", get_number());
	return 0;
}
