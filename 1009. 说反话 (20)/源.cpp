#include<iostream>
#include<string>//C++ �ַ�����
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
	string v;//���������
	getline(cin, in);//��ȡ�ַ���(�����ո�)
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
	trim(v);//ȥ����β�ո�
	cout << v << endl;
	return 0;
}
