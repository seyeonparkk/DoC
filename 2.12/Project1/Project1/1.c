#include<stdio.h>
http://indiside.com/Tip_share/222238
union data {
	char c1;
	short num1;
	int num2;
};
int main() {
	union data d1;  //����ü ���� ����
	d1.num2 = 0x12345678;   //��Ʋ ����𿡼��� �޸𸮿� ����ɶ� 78 56 12 34�� �����
	printf("0x%x\n", d1.num2);  //0x12345678 : 4����Ʈ ��ü�� ���
	printf("0x%x\n", d1.num1);  //0x5678 :���� 2����Ʈ ���� ���
	printf("0x%x\n", d1.c1);   //0x78 : ���� 1����Ʈ ���� ���

	printf("%d\n", sizeof(d1));  //4 : ����ü ��ü ũ��� ���� ū �ڷ����� ũ��
}