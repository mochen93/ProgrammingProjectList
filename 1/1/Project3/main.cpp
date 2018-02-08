//元音字母统计
#include<iostream>
#include <string>
using namespace std;
int compute_word(string& str);
int main()
{
	cout << "input the string you wangt" << endl;
	string str;
	cin >> str;
	int t=compute_word(str);
	cout <<"the number of aioeu is"<< t << endl;
	system("pause");
	return 0;
	
}
 int compute_word(string& str)
{
	std::size_t found = str.find_first_of("aeiou");
	int t = 0;
	while (found != std::string::npos)
	{
		t++;
		found = str.find_first_of("aeiou", found + 1);
	}
	return t;
}