#include<stdio.h>
#include<malloc.h>
struct human {
	char name[12];
	int age;
	double height;
};
int main() {
	//구조체 포인터 배열
	struct human* pju[5];
	//구조체 할당
	for (int i = 0; i < 5; i++) {
		pju[i] = (struct human*)malloc(sizeof(struct human*));
	}
	pju[3]->age = 45;
	printf("%d\n", pju[3]->age);

	for (int i = 0; i < 5; i++) {
		free(pju[i]);
	}
}