#include<stdio.h>
void print_gugudan(int n) {
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d", n, i, n * i);
	}
}
int main() {
	int dan;
	scanf_s("%d", &dan);
	print_gugudan(dan);


	return 0;
}