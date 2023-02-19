#include<stdio.h>
void print_ascii() {
	char a;
	for (a = 'A'; a <= 'Z'; a++) {
		printf("%c %d", a, a)
	}

}

int main() {
	print_ascii();

	return 0;
}