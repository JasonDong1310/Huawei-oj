#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;
static void func1(string str)
{
	string tmp = "";
	vector<string> vec;
	for (int i = 0; i<str.size(); i++)
	{

		if (str[i] == ' ')
		{
			vec.push_back(tmp);
			tmp.clear();
		}
		else
		{
			tmp += str[i];
		}
	}
	vec.push_back(tmp);
	for (auto it = vec.rbegin(); it != vec.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	string str;
	while (getline(cin, str))
	{
		func1(str);
	}
	return 0;
}

//{ 
//      stack<string> ss; 
//      string s; 
//      while(cin>>s) 
//      { 
//          ss.push(s); 
//      } 
//      while(!ss.empty()) 
//      { 
//          cout<<ss.top(); 
//          ss.pop(); 
//          if(!ss.empty()) 
//              cout<<' '; 
//      } 
//      cout<<endl; 
//}
