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
	
	outboxmessage("�ڽ��� �׸��� �� �ȿ� ���ڿ��� ����Ѵ�");
	outboxmessage("���޵� ���ڿ��� ���̿� ������ �ڽ��� ������ ����Ѵ�");
	outboxmessage("�ű��ϱ�");
}
