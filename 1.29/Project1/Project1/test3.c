#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	struct {
		int age;
		double height;
		char name[12];
	}kim;
	strcpy(kim.name,"ȣ��");
	kim. age = 29;
	kim. height = 181.4;

	printf("�̸� = %s,���̴� = %d", kim. name, kim. age);

	return 0;
}