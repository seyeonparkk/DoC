#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char s1[10] = "hello";
	char s2[10];
	char s3[10];

	strcpy(s2, s1);  //���ڿ� ���� s1->s2
	strncpy(s3, s1, 3);   //���ڿ� ���� 3�ڸ�����

	printf("s1 : %s\n", s1);  //����
	printf("s1 : %s\n", s2);  //����
	printf("s1 : %s\n", s3);  //3�ڸ����� ����



}