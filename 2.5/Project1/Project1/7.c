#include<stdio.h>
#include<malloc.h>
struct human {
	char name[12];
	int age;
	double height;
};
int main() {
	//����ü ������ �迭
	struct human* pju[5];
	//����ü �Ҵ�
	for (int i = 0; i < 5; i++) {
		pju[i] = (struct human*)malloc(sizeof(struct human*));
	}
	pju[3]->age = 45;
	printf("%d\n", pju[3]->age);

	for (int i = 0; i < 5; i++) {
		free(pju[i]);
	}
}