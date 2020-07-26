#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		vector<char> Q;
	    for(int i = 0;i<a.length();i++) Q.push_back(a.at(i));
	    for(auto it = Q.rbegin();it!=Q.rend();it++) cout<<*it;
	    cout<<endl;
	}
	return 0;
}
