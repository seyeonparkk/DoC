#include<stdio.h>

//return : 반환값
//char : 문자->정수를 반환하거나 문자를 반환해야 한다 return 정수;
// void : 없음 ->자료형이 없으므로 그냥 return 사용하면 됨
//short : 크기가 작은 정수->정수형을 반환한다 return 정수;
//int : 정수->정수형을 반환한다 return 정수;
//float : 실수->실수형을 반환한다 return 실수;
//double : 크기가 큰 실수->실수형을 반환한다 return 실수;
//boolean : 논리값 0또는 1->논리값을 반환한다 return 논리값;

//void hello();    //함수선언 반환값이 없는 hello 함수원형 선언
//
//
//void main() {
//	hello();    //함수호출
//	return 0;
//}
//
//void hello() {     //반환없는 hello함수 정의
//	printf("hello world \n");
//}
//void sum(int a,int b, int c) {
//		c=a + b;
//		return;
//}
//void main() {
//	int A;
//	sum(5, 10, A);
//	return;
//}
int sum(int a,int b) {
	return a + b;
}
void main() {
	int A;
	A=sum(5, 10);
	return;
}