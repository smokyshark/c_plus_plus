#include<iostream>
#include<cstdlib>
#include<Windows.h>

using namespace std;

int main()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Standart" << endl << endl;

	SetConsoleTextAttribute(hOut, BACKGROUND_RED);
	cout << "Ten napis jest z czerwonym tlem i zwyk�ym tekstem" << flush << endl << endl;

	SetConsoleTextAttribute(hOut, FOREGROUND_RED);
	cout << "Ten napis jest czerwony bez tla" << endl;

	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Ten napis jest zielony i [i]INTENSITY[/i]" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "Ten napis jest fioletowy'" << endl;

	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Ten napis jest fioletowy i intesywny" << endl;

	cout << "Standart" << endl << endl;
	cout << "by DrraVen" << endl;
	cout << "Zycze milych prac z c++" << endl;
	//Standardowy ^
	SetConsoleTextAttribute(hOut, BACKGROUND_RED);
	cout << "Ten napis jest z cerwonycm tlem i zwyk�ym tekstem" << flush << endl << endl;
	//T�o ^
	SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
	cout << "Ten napis ma zielone tlo" << flush << endl;
	//T�o2 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_RED);
	cout << "Ten napis jest czerwony bez tla" << endl;
	//Napis ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
	cout << "Ten napis jest zielony" << endl << endl;
	//Napis2 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
	cout << "Ten napis jest niebieski" << endl << endl;
	//Napis3 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Ten napis jest zielony i [i]INTENSITY[/i]" << endl;
	//Intesywny ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Ten napis jest zielony i [i]INTENSITY[/i]" << endl;
	//Intesywny2 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Ten napis jest niebieski i [i]INTENSITY[/i]" << endl;
	//inne kolory ^
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "Ten napis jest fioletowy'" << endl;
	//inne kolory ^
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Ten napis jest fioletowy i intesywny" << endl;
	//inne kolory + intesywno�� ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED);
	cout << "Ten napis jest [i]ala[/i] zloty " << endl;
	//inne kolory2 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Ten napis jest bardzije podobny do zlotego bo ma intesywnosc" << endl;
	//inne kolory 2 + intesywno�� ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Ten napis jest seledynowy, bo jest intesywny" << endl;
	//inne kolory3 + intesywno�� ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "Ten napis jest matowy bo nie ma intesywnosci" << endl;
	//inne kolory3 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "Mozna powiedzie� ze ten napis jest standartowy" << endl;
	//inne kolory4 ^
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Ten napis jest srebny bo ma intesywnosc" << endl;
	//inne kolory4 + intesywno�� ^
	// endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	// endl;

	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	system("PAUSE");
	system("pause");
	return 0;
}