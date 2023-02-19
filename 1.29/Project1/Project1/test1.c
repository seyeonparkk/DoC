#include<stdio.h>
#include<stdlib.h>

int main() {
	int* pArr;
	int num;
	int avg=0;
	printf("몇 과목을 저장?");
	scanf_s("%d", &num); 

	pArr = (int**)malloc(sizeof(int*) * num);

	if (pArr == NULL) {
		printf("malloc error");
		return 0;
	}
	for (int i = 0; i < num; i++) {
		printf("점수를 입력하세요 \n");
		scanf_s("%d", &pArr);
	}

	for (int i = 0; i < num; ++i) {
		avg += pArr[i];
	}
	avg /= num;
	printf("평균 : %d", avg);

	
	free(pArr);

	return 0;
}
