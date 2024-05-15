#include <windows.h>
#include <iostream>		
#include "../../VANGUARD BYPASS (VALORANT)/xostr.hpp"
#include "../../VANGUARD BYPASS (VALORANT)/color.hpp"
#include "../../VANGUARD BYPASS (VALORANT)/Bypass/bypass.h"
#include <conio.h>

#define F1          59
#define F2          60
#define F3          61

void Menu() {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 600, TRUE);

YKPCOLIDIKAMARMANDIMENUUTAMA:
	std::cout << "\n\n";
	std::cout << termcolor::white << "   [F1] BYPASS VANGUARD (VGK + VGC)" << std::endl;
	std::cout << termcolor::white << "   [F2] Check status VGC + VGK" << std::endl;
	std::cout << termcolor::white << "   [F3] Exit" << std::endl;

	while (true)
	{
		char key;
		key = _getch();
		if (key == 0) {
			key = _getch();
			switch (key) {
			case F1:
				Beep(400, 500);
				system("cls");
				Bypass();
				break;
			case F2:
				Beep(400, 500);
				system("cls");
				system("sc query vgc");
				system("sc query vgk");
				std::cout << "\n\n Press any bind to back. . .";
				system(XorStr("Pause >nul").c_str());
				system("cls");
				goto YKPCOLIDIKAMARMANDIMENUUTAMA;
				break;
			case F3:
				Beep(400, 500);
				exit(0);
			}
		}
	}
}