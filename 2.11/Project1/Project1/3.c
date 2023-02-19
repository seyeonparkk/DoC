#include<stdio.h>
union mem {
	int a;
	long b;
	double c;
};
int main() {
	union mem obj;
	obj.a = 1;
	obj.b = 200;
	printf("a : %d", obj.a);  //200
	printf("b : %d", obj.b);  //200
	obj.c = 1000000;
	printf("c : %f", obj.c);
}