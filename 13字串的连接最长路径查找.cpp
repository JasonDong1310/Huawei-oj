#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(string &a,string &b)
{
	return a<b;
}
int main()
{
	vector<string> Q;
	int n;
	string a;
	while(cin>>n)
	{
		for(int i = 0;i<n;i++)
		{
			cin>>a;
			Q.push_back(a);
		}
		sort(Q.begin(),Q.end(),cmp);
		vector<string>::iterator it;
		for(it = Q.begin();it!=Q.end();it++) cout<<*it<<endl;
	}
	return 0;
}
