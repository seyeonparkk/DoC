#include<stdio.h>

typedef struct {

	char title[30]; 
	char author[30];
	int published;

}book;

int main() {
	int i;
	book books[3];
		
		printf("=========�������� �Է�==========");
		for (int i = 0; i < 3; i++) {
			printf("���� : ");
			scanf_s("%s", &books[i].title);
			printf("���� : ");
			scnaf_s("%s", &books[i].author);
			printf("�Ⱓ�⵵ : ");
			scnaf_s("%d", &books[i].published);
		}
		printf("====�������� ���====");
		for (int i = 0; i < 3; i++) {
			printf("���� : ");
			scanf_s("%s", &books[i].title);
			printf("���� : ");
			scnaf_s("%s", &books[i].author);
			printf("�Ⱓ�⵵ : ");
			scnaf_s("%d", &books[i].published);
		}
	
}