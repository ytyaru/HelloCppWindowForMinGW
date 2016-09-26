#include <windows.h>
#include <tchar.h>
#include<iostream>
#include <stdio.h>
class MyClass
{
public:
	void Show()
	{
		printf("Call C++ Class Function.(printf)\n");
		std::cout << "Call C++ Class Function.(std::cout)" << std::endl;
		OutputDebugString("Call C++ Class Function.(OutputDebugString)\n");
//		system("pause");
		MessageBox(
			NULL,
			_T("Hello Windows API on C++ !!"),
			_T("Hello Windows API on C++ !!"),
			MB_OK
		);
	}
};
int WINAPI WinMain(HINSTANCE hCurInst, HINSTANCE hPrevInst, LPSTR lpsCmdLine, int nCmdShow)
{
	MyClass cls;
	cls.Show();
	system("pause");
	return 0;
}
