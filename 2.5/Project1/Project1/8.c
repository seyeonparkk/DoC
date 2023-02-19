#include<stdio.h>
struct human {
	char name[12];
	int age;
	double height;
};
struct sbook {
	char title[20];
	int pages;
	struct human author;
};
int main() {
	struct sbook api = {
		"sbs c",2100,
		{"홍길동",48,178}
	};
	printf("저자 %s", api.author.name);
}