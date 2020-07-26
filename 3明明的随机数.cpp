#include<iostream>
#include<algorithm>
using namespace std;
int a[1005];
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i = 1; i<=n; i++) cin>>a[i];
		sort(a+1,a+1+n);
		int l = unique(a+1,a+1+n)  - a;
		for(int i = 1; i<l; i++) cout<<a[i]<<endl;
	}
	return 0;
}
