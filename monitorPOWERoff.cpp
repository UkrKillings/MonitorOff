#include <iostream>
#include <Windows.h>

int main()
{
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2); // выкл монитора

	Sleep(5000);

	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1); // вкл монитора

	return 0;
}