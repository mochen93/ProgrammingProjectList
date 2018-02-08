//拉丁猪文字游戏
#include<iostream>
#include<string>
using namespace std;
const string & PigLati(string& str);
int main()
{
	cout << "ÊäÈë" << endl;
	string str;
	cin >> str;
	PigLati(str);
	cout << str << endl;
	return 0;
}
const string & PigLati(string& str)
{
	string::size_type pos = str.find_first_of("aeiou");
	string sub = str.substr(0, pos);
	str.erase(0, pos);
	str.append(sub);
	str.append("ay");
	return str;
}