#include<stdio.h>
void Hi() {
	printf("hi\n");
}
void hello(char c[]) {   //���ڿ� ����ϱ� ������ �ε��� ����
	printf("%s\n", c);
}
int hap(int a,int b) {
	return(a + b);
}
int main() {
	int intReturn = 0;
	printf("hi\n");  //�����Լ�->��������ִ� ���(ǥ���Լ�)

	Hi(); Hi();    //a[]�Ű����� ���� ��ȯ���� ���� ��� 

	hello("�ȳ�");hello("�ݰ���");  //[b]�Ű������� �ִ� ���

	intReturn=hap(3, 5);    //[c]��ȯ���� �ִ� ���

	printf("����� : %d", intReturn);

	return 0;
}