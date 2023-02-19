#include<stdio.h>
//const int valueC = 3;
//enum hdmi_content_type {
//	HDMI_CONTENT_TYPE_GRAPHICS,
//	HDMI_CONTENT_TYPE_PHOTO,
//	HDMI_CONTENT_TYPE_CINEMA,
//	HDMI_CONTENT_TYPE_GAME
//};

enum dow {
	//°ª1=ÃÊ±ê°ª
	sun = 0,
	mon,tue,wed,thu,fri,sat
};
int main() {
	enum dow week;
	week = thu;
	printf("%d", week);
}