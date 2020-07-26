#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const string s1 = "0123456789abcdefABCDEF";
const string s2 = "084C2A6E195D3B7F5D3B7F";
int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		string s,ss1,ss2;
		s = str1+str2;
		int len = s.size();
		for(int i = 0;i<len;++i)
		{
			if(i % 2 == 0) ss1 += s[i];
			else ss2 += s[i];
		}
		sort(ss1.begin(),ss1.end());
		sort(ss2.begin(),ss2.end());
		s.clear();
		for(int i = 0,j = 0,k=0;i<len;++i)
		{
			if(i%2 == 0) s += ss1[j++];
			else s += ss2[k++];
		}
		for(int i = 0;i<len;++i)
		{
			int n = s1.find(s[i]);
			if(n!=-1) s[i] = s2[n];
		}
		cout<<s<<endl;
	}
	return 0;
}
