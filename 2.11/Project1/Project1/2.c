#include<stdio.h>
struct structtype {
	char a, b, c;
};
union uniontype {
	char a, b, c;
};
int main() {
	struct structtype st;
	union uniontype ut;
	st.a = 'A';st.b = 'B';st.c = 'C';
	ut.a = 'A';printf("%c", ut.a);
	ut.b = 'B';printf("%c", ut.b);
	ut.c = 'C';printf("%c\n", ut.c);

	printf("����ü structtype �ν��Ͻ� ������ : %d", sizeof(st));
	printf("����ü uniontype �ν��Ͻ� ������ : %d", sizeof(ut));
}