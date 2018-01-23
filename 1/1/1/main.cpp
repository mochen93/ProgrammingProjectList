//逆转字符串——输入一个字符串，将其逆转并输出。
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,str1;
	cin >> str;
	int str_number = str.size();
	cout << str_number<<endl;
	
	for (int i=0;i<str_number;i++)
	{
		cout << i << str[i] <<endl;
		str1=str1+str[str_number-i-1];
	}
	cout << str1<<endl;
	return 0;
//TODO(tomas 18_1_23)：判断是否是中文字符串，以及中文如何逆转输出
}

