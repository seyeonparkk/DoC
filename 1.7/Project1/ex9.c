#include<stdio.h>
//반환값 자료형 함수이름(인자값 or 매개변수) {
//	코드;
//}
void hello() {
	int num1 = 10;    //지역변수hello{}끝나면 사라짐
	printf("hello,%d", num1);
}
void main() {
	int num1 = 20;
	hello();
	printf("%d", num1);
}