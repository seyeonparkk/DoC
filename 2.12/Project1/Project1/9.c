#include<stdio.h>
int convcase(int ch) {
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'Z')
		return ch - diff;
	else
		return -1;

}

int main() {
	int ch;
	printf("문자입력 : ");
	ch = getchar();
	ch = convcase(ch);
	if (ch == -1) {
		puts("잘못입력함");
		return -1;
	}
	putchar(ch);
	return 0;
}