#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double data;
	while(cin>>data)
	{
		data+=0.5;
		cout<<floor(data)<<endl;
	}
	return 0;
} 
