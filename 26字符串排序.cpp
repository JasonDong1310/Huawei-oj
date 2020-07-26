#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		string eng;
		for(int i = 0; i<str.size(); i++)
		{
			if(isalpha(str[i]))
				eng+=str[i];
		}
		string english_sort;
		for(int i = 0; i<26; i++)
		{
			for(int j = 0; j<eng.size(); j++)
			{
				if(eng[j] - 'a' == i || eng[j] - 'A' == i) english_sort+=eng[j];
			}
		}
		int tmp = 0;
		for(int i = 0; i<str.size(); i++)
			if(isalpha(str[i]))
			{
				str[i] = english_sort[tmp];
				tmp++;
			}
		cout<<str<<endl;	
	}
	return 0;
}
