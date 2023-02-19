#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char s1[10] = "hello";
	char s2[10];
	char s3[10];

	strcpy(s2, s1);  //문자열 복사 s1->s2
	strncpy(s3, s1, 3);   //문자열 복사 3자리까지

	printf("s1 : %s\n", s1);  //원본
	printf("s1 : %s\n", s2);  //복사
	printf("s1 : %s\n", s3);  //3자리까지 복사



}