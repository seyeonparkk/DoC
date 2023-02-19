#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char input[4];
	char output[4];
	char search[4];
	char delete[4];
}todo;
int main() {
	int i;
	todo  Do[4];
	while (1) {
		printf("당신의 선택은? : ");
	}
	switch (i) {
	case 1:
		printf("학생 번호 : \n");
		scanf("%d", Do[i].input);
	case 2:
		printf("===메뉴===");
		printf("===출력===");
		printf("===검색===");
		printf("===삭제===");
	case 3: 
		printf("학생 번호 검색 :  ");
		scanf("%d", Do[i].search);
	case 4:
		printf("학생번호 삭제 :  ");
		scanf("%d", Do[i].delete);
		
	}
}