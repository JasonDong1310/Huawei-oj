#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		vector<string>V1;
		for(int i = 0;i<str.size();i++)
		{
			if(isalpha(str[i]))
			{
				string tmp;
				int j;
				for(j = i;j<str.size();j++)
				{
					if(isalpha(str[j]))
					tmp+=str[j];
					else break;	
				}
				V1.push_back(tmp);
				i = j;	
			}	
		}
		for(int i = V1.size()-1;i>=0;i--)
		{
			if(i>0) cout<<V1[i]<<" ";
			if(i == 0) cout<<V1[i]<<endl;
		}	
	}
	return 0;	
} 
