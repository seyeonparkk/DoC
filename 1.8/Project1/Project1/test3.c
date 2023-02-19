#include<stdio.h>
void Hi() {
	printf("hi\n");
}
void hello(char c[]) {   //문자열 출력하기 때문에 인덱스 붙임
	printf("%s\n", c);
}
int hap(int a,int b) {
	return(a + b);
}
int main() {
	int intReturn = 0;
	printf("hi\n");  //내장함수->만들어져있는 기능(표준함수)

	Hi(); Hi();    //a[]매개변수 없고 반환값도 없는 경우 

	hello("안녕");hello("반가워");  //[b]매개변수가 있는 경우

	intReturn=hap(3, 5);    //[c]반환값이 있는 경우

	printf("결과값 : %d", intReturn);

	return 0;
}