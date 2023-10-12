/************************************************************************************************
	Name: CoachLDE
	Date: 10.11.2023
	Purpose: This is the function HideCursor().  A function that is used to hide the cursor in a
			 Console Program
*************************************************************************************************/

#include <iostream>		//Include all of the functions in the input/output
#include <Windows.h>	//Include all functions in the Windows API

using namespace std;

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.dwSize = 100;
	cursor.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}

int main()
{
	cout << "There is no cursor." << endl;
	HideCursor();

	return 0;
}