#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>

void Bypass() {
    system("sc config vgc start= disabled");
    system("sc config vgk start= disabled");
    system("net stop vgc");
    system("net stop vgk");
    system("taskkill /IM vgtray.exe");
    MessageBox(0, "Done bypassing vgc + vgk", "BYPASS", MB_OK | MB_ICONQUESTION);
    MessageBox(0, "You need to reebot/restart (optional)", "ADMIN", MB_OK | MB_ICONQUESTION);
}