#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	struct {
		int age;
		double height;
		char name[12];
	}kim;
	strcpy(kim.name,"호석");
	kim. age = 29;
	kim. height = 181.4;

	printf("이름 = %s,나이는 = %d", kim. name, kim. age);

	return 0;
}