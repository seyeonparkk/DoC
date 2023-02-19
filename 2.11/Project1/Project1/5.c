#include<stdio.h>
enum luxskill {
	a = 1,
	b,c,d
};
int main() {
	enum luxskill s;
	s =a;
	switch (s) {
	case a:printf("a");break;
	case b:printf("b");break;
	case c:printf("c");break;
	case d:printf("d");break;
	}
}