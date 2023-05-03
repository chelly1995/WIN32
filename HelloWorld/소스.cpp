#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <tchar.h> 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	MessageBox(NULL, _T("\tHello, World!"), _T("My First Win32 App"), NULL);
	return 0;
}
