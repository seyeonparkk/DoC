#include<stdio.h>
int Max(int a, int b) {
	/*int m = 0;
	if (a > b) {
		m = a;
	}else{
			m = b;
	}
	return m;*/

	return(a > b) ? a : b;
}
void Calc(int a, char c, int b) {

}
void main() {
	//[0]���� �����
	int m = 0;
	int r = 0;

	//[1]
	m = Max(3,5);
	printf("ū �� %d", m);

	//[2]�Լ� ȣ��
	Calc(3, '+', 5);
	Calc(3, '-', 5);
	Calc(3, '%', 5);

	//[3]pow
	r = pow(2, 10);
	printf("2�� 10�� : %d\n", r);

	r = pow(2, 20);
	printf("2�� 10�� : %d\n", r);


	return 0;

}
int pow(int a, int b) {
	int r = 1;  //�ʱ�ȭ
	int i = 0;

	for (i = 0; i < b; i++) {
		r*= a;
	}
	return r;  //a^b
}
void Calc(int a, char c, int b) {
	int r = 0;
	switch (c)
	{
	case '+':r = a + b;break;
	case '-':r = a - b;break;
	case '*':r = a * b;break;
	case '/':r = a / b;break;
	case '%':r = a % b;break;

	}
	printf("%d %c %d => %d", a, c, b, r);
}