#include<stdio.h>
enum PROTOCOL_TYPE {
	PROTOCOL_IP=4,
	PROTOCOL_UDP,
	PROTOCOL_TCP	
};
int main() {
	enum PROTOCOL_TYPE p1, p2, p3;
	p1 = PROTOCOL_TCP;
	p2 = PROTOCOL_UDP;
	p3 = PROTOCOL_IP;

	printf("%d %d %d", p1, p2, p3);
}