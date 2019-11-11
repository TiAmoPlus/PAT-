#include<iostream>
#include<string>//C++ 字符串类
using namespace std;
string& trim(string &s)
{
	if (s.empty())
	{
		return s;
	}
	s.erase(0, s.find_first_not_of(" "));
	s.erase(s.find_last_not_of(" ") + 1);
	return s;
}
int main(){
	string in;
	string v;//最后输出结果
	getline(cin, in);//获取字符串(包括空格)
	string temp;
	for (int i = 0; i < in.length(); i++) {
		if (in[i] == '\n') {
			break;
		}
		if (in[i] != ' ') {
			temp += in[i];
		}
		else {
			v = " " + v;
			v = temp + v;
			temp = "";
		}
	}
	v = " " + v;
	v = temp + v;
	trim(v);//去掉首尾空格
	cout << v << endl;
	return 0;
}
