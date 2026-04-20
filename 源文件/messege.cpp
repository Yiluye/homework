#include"../头文件/Messege.h"
#include<easyx.h>
static Coordinate mouse;
void Peekinputmessege() {
	ExMessage msg;
	while (peekmessage(&msg, EX_MOUSE)) {
		mouse.x = msg.x;
		mouse.y = msg.y;
	}
}
//找ai问的
bool Iskeydown(int key) {
	return (GetAsyncKeyState(key) & 0x8000) != 0;
}

Coordinate Getmouthmessege() {
	return mouse; 
}