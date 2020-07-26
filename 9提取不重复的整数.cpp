#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int a[100005];
int main()
{
	int n;
	while(cin>>n)
	{
		int ret,x = n;
		set<int>s;
		if(n == 0) ret = 0;
		while(n!=0)
		{
			x = n % 10;
			n/=10;
			if(s.find(x) == s.end())
			{
				s.insert(x);
				ret = ret * 10 + x;
			}
		}
		cout<<ret<<endl;
	}
	return 0;
}
