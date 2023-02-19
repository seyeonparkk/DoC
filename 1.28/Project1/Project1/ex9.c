#include<stdio.h>
#include<stdlib.h>

int main() {
	char* p_name = malloc(3);   //동적메모리할당

	p_name[0] = 'a';
	p_name[1] = 'b';
	p_name[2] = 'b';

	printf("%s\n", p_name);

	char name[3];
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';

	printf("%s\n", name);
	free(p_name);
}