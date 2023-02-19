#include<stdio.h>
void outboxmessage(char* str) {
	int len = strlen(str);
	for (int i = 0; i < len + 4; i++) {
		puts('-');
	}
	puts("");
	printf("| %s |\n", str);

	int len = strlen(str);
	for (int i = 0; i < len + 4; i++) {
		puts('-');
	}
	puts("");
}
int main() {
	
	outboxmessage("박스를 그리고 그 안에 문자열을 출력한다");
	outboxmessage("전달된 문자열의 길이에 적당한 박스를 스스로 계산한다");
	outboxmessage("신기하군");
}
