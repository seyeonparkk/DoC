#include<stdio.h>
struct phone {
	int code;
	unsigned long long num;
};
struct person {
	char name[20];
	int age;
	struct phone phone;
};
int main() {
	struct person* p1 = malloc(sizeof(struct person));
	//struct person p1;
	p1->phone=malloc(sizeof(struct phone));
	p1->phone.code = 82;   //����-���-��� ������ �����Ͽ� �� �Ҵ�
	p1->phone.num = 0101234567;
	printf("%d %||u\n", p1->phone.code, p1->phone.num);
	free(p1);
	free(p1->phone);
}