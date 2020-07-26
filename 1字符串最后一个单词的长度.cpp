#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int end = a.find_last_of(' ');
	string last(a,end+1,a.size() - end);
	cout<<last.size();
	return 0;
}
