#include<stdio.h>
#include<stdlib.h>

void InputScores(int* base, int size) {  //asize명의 성적을 입력하는 함수
	base = (int*)malloc(sizeof(int)*size);
	printf("최대 관리할 학생 수를 입력하세요");
	scanf_s("%d", &base);
}
void ViewScores(int* base, int asize) {   //asize명의 성적을 출력하는 함수
	int score;
	for (int i = 0; i < asize; i++) {
		printf("%d번 : %d", base + 1, score);
	}
}

int InputScore(int num) {  //num번의 학생 성적을 입력받는 함수
	for (int i = 0; i < num; i++) {
		printf("%d번의 성적을 입력하세요",num+1 );
		scanf_s("%d", &num);
	}



}
int main() {

	printf(InputScores);
	printf(InputScore);
	printf(ViewScores);



	return 0;
}
