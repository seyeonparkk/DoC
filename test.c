#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main() {
	int a;
	int random;
	random = (rand() % 4) + 1;
	int b;


	while (random = a) {
		printf("���ָ� �Ұ� : 1. ������ 2. ���� 3. ���� 4. ��������  5�� ���� ");
		printf("�� ��ȣ�� �Է����ּ���");
		scanf_s("%d", &a);
		printf("����� ������ �� �ִ� �ݾ��� 2000���Դϴ�");
		scanf_s("%d", &b);
		if (b > 2000) {
			printf("�ݾ��� ���ڶ��ϴ� �ٽ� �Է����ּ��� : ");
			scanf_s("%d", &b);
		}


	}

	switch (a) {
	case 5:
		printf("������ �����մϴ�");
		break;
	}
	if (a == 0)
		printf("������ �����մϴ�");
	printf("����� ������ �� �ִ� �ݾ��� 2000�� �Դϴ�");
	if (random == a) {
		printf("�����Դϴ�");
	}
	else {
		printf("�����Դϴ� ���� �ݾ��� %d�Դϴ�", 2000 - a);
	}

	
}


