#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long data;
	while(cin>>data)
	{
		string ret;
		long long tmp = data;
		while(tmp!=1)
		{
			for(int i = 2;i<=tmp;i++)
			{
				if(tmp%i == 0)
				{
					ret +=to_string(i);
					ret+=" ";
					tmp/=i;
					break;
				}
			}
		}
		cout<<ret<<endl;
	}
	return 0;
}
