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
		{"ȫ�浿",48,178}
	};
	printf("���� %s", api.author.name);
}