#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		int b = a.size();
		cout<<b<<endl;
		for(int i = 0; i<b; i++)
			cout<<a[b-i-1];
		cout<<endl;	
	}
	return 0;
}
