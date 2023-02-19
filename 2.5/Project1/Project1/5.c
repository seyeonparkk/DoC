#include<stdio.h>
#pragma pack(push,1)
struct hea {
	char flags;
	int seq;
};
int main() {
	struct hea header;
	printf("%d", sizeof(header.flags));
		printf("%d", sizeof(header.seq));
		printf("%d", sizeof(header));
		printf("%d", sizeof(struct hea));
}