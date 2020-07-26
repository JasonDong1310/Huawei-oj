#include<iostream>
#include<set>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		set<char>Q(a.begin(),a.end());
		cout<<Q.size()<<endl;
	}
	return 0;
}
