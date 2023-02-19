#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main() {
	int a;
	int random;
	random = (rand() % 4) + 1;
	int b;


	while (random = a) {
		printf("경주말 소개 : 1. 빛나리 2. 번개 3. 빠샤 4. 민프레스  5는 종료 ");
		printf("말 번호를 입력해주세요");
		scanf_s("%d", &a);
		printf("당신이 투자할 수 있는 금액은 2000원입니다");
		scanf_s("%d", &b);
		if (b > 2000) {
			printf("금액이 모자랍니다 다시 입력해주세요 : ");
			scanf_s("%d", &b);
		}


	}

	switch (a) {
	case 5:
		printf("게임을 종료합니다");
		break;
	}
	if (a == 0)
		printf("게임을 종료합니다");
	printf("당신이 투자할 수 있는 금액은 2000원 입니다");
	if (random == a) {
		printf("성공입니다");
	}
	else {
		printf("실패입니다 남은 금액은 %d입니다", 2000 - a);
	}

	
}


