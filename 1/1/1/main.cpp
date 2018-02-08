
#include<iostream>
#include<string>
#include <locale.h>
using namespace std;
int main()
{
	wcin.imbue(std::locale("chs"));
	wcout.imbue(std::locale("chs"));
	wstring str;
	wcin >> str;
	wstring str_copy(str.rbegin(), str.rend());
	wcout << str_copy << endl;
	return 0;
}

