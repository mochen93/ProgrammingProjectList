//��ת�ַ�����������һ���ַ�����������ת�������
#include<iostream>
#include<string>
#include <locale.h>
using namespace std;
int main()
{
	//wstring ���ַ���ÿ���ַ�������Ӣ�Ķ�ռ�����ֽڣ�ֻ�Ƕ�Ӧcin��coutҪ�ĳ���Ӧ����
	wcin.imbue(std::locale("chs"));
	wcout.imbue(std::locale("chs"));
	wstring str;
	wcin >> str;
	wstring str_copy(str.rbegin(), str.rend());
	wcout << str_copy << endl;
	return 0;
}

