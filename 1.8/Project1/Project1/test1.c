#include<stdio.h>
#include<stdbool.h>
float realnum() {
	 return 1.234567;
	
	
}
bool num2() {
	return true;
	
}
void main() {
	float num1;
	bool b1;

	num1=realnum();
	b1=num2();
	printf("f", num1);
	printf("%d", b1);
	return 0;
}