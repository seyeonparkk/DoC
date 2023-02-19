#include<stdio.h>
#include<string.h>
#include<string.h>
#include<math.h>
int main() {
	char* bu;
	bu = malloc(100 * pow(2, 20));
	if (bu) {
		memset(bu, 0, 100 * pow(2, 20));
		strcpy(&bu[0], "hi");
		puts(&bu[0]);
		strcpy(&bu[1000], "nice");
		puts(&bu[1000]);
		free(bu);
	}
}