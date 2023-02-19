#include<stdio.h>

typedef struct {

	char title[30]; 
	char author[30];
	int published;

}book;

int main() {
	int i;
	book books[3];
		
		printf("=========도서정보 입력==========");
		for (int i = 0; i < 3; i++) {
			printf("제목 : ");
			scanf_s("%s", &books[i].title);
			printf("저자 : ");
			scnaf_s("%s", &books[i].author);
			printf("출간년도 : ");
			scnaf_s("%d", &books[i].published);
		}
		printf("====도서정보 출력====");
		for (int i = 0; i < 3; i++) {
			printf("제목 : ");
			scanf_s("%s", &books[i].title);
			printf("저자 : ");
			scnaf_s("%s", &books[i].author);
			printf("출간년도 : ");
			scnaf_s("%d", &books[i].published);
		}
	
}