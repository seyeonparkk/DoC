#include<stdio.h>
struct Person {
	char name;
	int age;
	char address[100];
};
int main() {
	struct Person p1;    //����ü ���� ����
	struct Person* ptr;   //����ü ������ ���� ����

	ptr = &p1;  //p1�� �޸� �ּҸ� ���Ͽ� ptr�� �Ҵ�
	ptr->age = 30;   //ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� ���� �Ҵ�

	printf("age : %d\n", p1.age);
	printf("age : %d\n", ptr->age);

}