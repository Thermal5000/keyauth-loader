#pragma once
#include <Windows.h>
#include <iostream>
#include <lmcons.h>


TCHAR username[UNLEN + 1];
DWORD username_len = UNLEN + 1;

std::string ReadFromFile(std::string path)
{
	std::string contents;
	std::ifstream file(path, std::ios::in);
	std::getline(file, contents);
	return contents;
}

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void WriteToFile(std::string path, std::string contents)
{
	std::ofstream file(path);
	file << contents;
	file.close();
}

void getuser()
{
	(GetUserNameA)((TCHAR*)username, &username_len);
}

void success(std::string name)
{
	getuser();
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("\n ["));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	(printf)(username);
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("@"));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	(printf)(("Thermal"));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("] "));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 2);

	std::cout << ("") << (name) << (" ");
}

void text(std::string text)
{
	getuser();


	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("\n ["));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	(printf)(username);
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("@"));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	(printf)(("Thermal"));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	(printf)(("] "));
	(SetConsoleTextAttribute)(GetStdHandle(STD_OUTPUT_HANDLE), 9);

	std::cout << ("") << (text) << (" ");
}