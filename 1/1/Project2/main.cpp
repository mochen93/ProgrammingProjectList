//拉丁猪文字游戏——这是一个英语语言游戏。基本规则是将一个英语单词的第一个辅音音素的字母移动到词尾并且加上后缀-ay（譬如“banana”会变成“anana-bay”）。可以在维基百科上了解更多内容。
#include<iostream>
#include<string>
using namespace std;
const string & PigLati(string& str);
int main()
{
	cout << "输入" << endl;
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