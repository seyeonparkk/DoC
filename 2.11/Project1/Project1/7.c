#include<stdio.h>

int main() {
	FILE* obj;
	obj = fopen("c:\\Temp\\Hello.txt","wt");
	if (obj == NULL) {
		printf("������ �������� �ʾҽ��ϴ� ��γ� ������ ���캸����");
	}
	else {
		fprintf(obj, "%s", "�ȳ��ϼ���");
	}
	fclose(obj);
}