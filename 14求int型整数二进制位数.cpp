#include<iostream>
#include<algorithm>
using namespace std;
//int c[10005];
//int main()
//{
//	int i = 0,n;
//	cin>>n;
//	do{
//		c[i++] = n%2;
//		n /= 2;
//	}while(n!=0);
//	for(i--;i>=0;i--)
//	{
//		if(a[i] )
//	}
//	cout<<c[i];
//	return 0;
//}
void Count(int n)
{
	int sum = 0;
	while(n!=0)
	{
		if(n & 1) sum++;
		n = n>>1;
	}
	cout<<sum;
}
int main()
{
	int n;
	while(cin>>n)
	{
		Count(n);
	}
	return 0;
}
