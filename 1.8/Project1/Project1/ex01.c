#include<stdio.h>

//return : ��ȯ��
//char : ����->������ ��ȯ�ϰų� ���ڸ� ��ȯ�ؾ� �Ѵ� return ����;
// void : ���� ->�ڷ����� �����Ƿ� �׳� return ����ϸ� ��
//short : ũ�Ⱑ ���� ����->�������� ��ȯ�Ѵ� return ����;
//int : ����->�������� ��ȯ�Ѵ� return ����;
//float : �Ǽ�->�Ǽ����� ��ȯ�Ѵ� return �Ǽ�;
//double : ũ�Ⱑ ū �Ǽ�->�Ǽ����� ��ȯ�Ѵ� return �Ǽ�;
//boolean : ���� 0�Ǵ� 1->������ ��ȯ�Ѵ� return ����;

//void hello();    //�Լ����� ��ȯ���� ���� hello �Լ����� ����
//
//
//void main() {
//	hello();    //�Լ�ȣ��
//	return 0;
//}
//
//void hello() {     //��ȯ���� hello�Լ� ����
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