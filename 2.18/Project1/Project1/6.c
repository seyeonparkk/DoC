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
		printf("����� ������? : ");
	}
	switch (i) {
	case 1:
		printf("�л� ��ȣ : \n");
		scanf("%d", Do[i].input);
	case 2:
		printf("===�޴�===");
		printf("===���===");
		printf("===�˻�===");
		printf("===����===");
	case 3: 
		printf("�л� ��ȣ �˻� :  ");
		scanf("%d", Do[i].search);
	case 4:
		printf("�л���ȣ ���� :  ");
		scanf("%d", Do[i].delete);
		
	}
}