#include<stdio.h>
enum MasterYiskill {
	AlphaStrole=1,
	medotatopm,
	wujustule,
	highlander

};
int main() {
	enum MasterYiskill skill;
	skill = medotatopm;
	switch (skill) {
	case AlphaStrole:printf("�ϰ��ʻ�");break;
	case medotatopm:printf("���");break;
	case wujustule:printf("���ַ� �˼�");break;
	case highlander:printf("������ ����");break;
	}
}