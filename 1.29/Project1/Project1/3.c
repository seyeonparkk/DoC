#include<stdio.h>

void DumpArray(void* array,int length) {
	for (int i = 0; i < length; i++) {
		printf("%02X", *((unsigned char*)array + i));
	}
	printf("\n");
}


int main() {
	char ar[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	DumpArray(ar, sizeof(ar));
	DumpArray(ar[0], sizeof(ar[0]));
	DumpArray(ar[1], sizeof(ar[1]));
	return 0;
}