#include<stdio.h>
#include<stdlib.h>

void InputScores(int* base, int size) {  //asize���� ������ �Է��ϴ� �Լ�
	base = (int*)malloc(sizeof(int)*size);
	printf("�ִ� ������ �л� ���� �Է��ϼ���");
	scanf_s("%d", &base);
}
void ViewScores(int* base, int asize) {   //asize���� ������ ����ϴ� �Լ�
	int score;
	for (int i = 0; i < asize; i++) {
		printf("%d�� : %d", base + 1, score);
	}
}

int InputScore(int num) {  //num���� �л� ������ �Է¹޴� �Լ�
	for (int i = 0; i < num; i++) {
		printf("%d���� ������ �Է��ϼ���",num+1 );
		scanf_s("%d", &num);
	}



}
int main() {

	printf(InputScores);
	printf(InputScore);
	printf(ViewScores);



	return 0;
}
