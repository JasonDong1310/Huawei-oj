#include<iostream>
#include<string>
using namespace std;
void str(string &s)
{
	if(s.size() <=8)
	{
		s.append(8 - s.size(),'0');
		cout<<s<<endl;
	}
	else
	{
		cout<<s.substr(0,8)<<endl;
		string s1 = s.substr(8,s.size() - 8);
		str(s1);
	}
}
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		str(s1);
		str(s2);
	}
	return 0;
}
