#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int> Q;
	int n;
	int key1,value1;
	while(cin>>n)
	{
		for(int i = 1;i<=n;i++)
		{
			cin>>key1>>value1;
			Q[key1]+=value1;	
		}
		map<int,int>::iterator it;
		for(it = Q.begin();it!=Q.end();it++)
		cout<<it->first<<" "<<it->second<<endl;	
	}
	return 0;	
} 
