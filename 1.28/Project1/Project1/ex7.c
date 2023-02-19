#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "korea";
	char* p;

	p=strchr(str, 'r');
	if (p != NULL) {
		*p = 's';
	}
	puts(str);
}