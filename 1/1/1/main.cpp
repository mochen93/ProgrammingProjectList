//逆转字符串——输入一个字符串，将其逆转并输出。
#include<iostream>
#include<string>
#include <locale.h>
using namespace std;
int main()
{
	//wstring 宽字符，每个字符不论中英文都占两个字节，只是对应cin，cout要改成相应命令
	wcin.imbue(std::locale("chs"));
	wcout.imbue(std::locale("chs"));
	wstring str;
	wcin >> str;
	wstring str_copy(str.rbegin(), str.rend());
	wcout << str_copy << endl;
	return 0;
}

