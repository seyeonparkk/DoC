#include<stdio.h>
//��ȯ�� �ڷ��� �Լ��̸�(���ڰ� or �Ű�����) {
//	�ڵ�;
//}
void hello() {
	int num1 = 10;    //��������hello{}������ �����
	printf("hello,%d", num1);
}
void main() {
	int num1 = 20;
	hello();
	printf("%d", num1);
}