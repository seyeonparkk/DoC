#include<stdio.h>
int main() {
	int st;
	int sum = 0;
	int num;

	printf("학생수를 입력하세요 : ");
	scanf_s("%d", &st);

	int* arr = (int*)malloc(sizeof(int) * st);
	for (int i = 0; i < st; i++) {
		printf("%d번 학생의 성적을 입력하세요 \n", i + 1);
		scanf_s("%d", &num);
	}
	
	
	sum += num;
	printf("총점 %d", sum);
	printf("평균 %d ", sum / st);
	free(arr);

	return 0;
}