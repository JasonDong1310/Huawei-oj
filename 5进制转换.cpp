#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,str1;
	int decimal = 0;
	int leap = 1;
	while(cin>>str)
	{
		char *offset;
		int ret = strtol(str.c_str(),&offset,16);
		cout<<ret<<endl;
	}
	return 0;
}
