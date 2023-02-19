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
	case AlphaStrole:printf("일격필살");break;
	case medotatopm:printf("명상");break;
	case wujustule:printf("우주류 검술");break;
	case highlander:printf("최후의 전사");break;
	}
}