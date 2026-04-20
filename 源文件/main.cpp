#include <Windows.h>
#include <easyx.h>
#include"../Í·ÎÄ¼þ/Messege.h"
int APIENTRY WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nShowCmd)
{
	initgraph(640, 480);
	Coordinate mouse;
	while (true) {
		Peekinputmessege();
		if (Iskeydown(VK_Q)) {
			break;
		}
		mouse = Getmouthmessege();
		circle(mouse.x, mouse.y, 10);

	}
	circle(200, 100, 100);
	Sleep(5000);
	closegraph();
	return 0;
}