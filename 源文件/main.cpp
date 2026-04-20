#include <Windows.h>
#include <easyx.h>

int APIENTRY WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nShowCmd)
{
	initgraph(640, 480);
	circle(200, 100, 100);
	Sleep(5000);
	closegraph();
	return 0;
}