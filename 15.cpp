#include<iostream>
#include<vector>

using namespace std;
struct node
{
	int pri;
	int q;
	int value;
};
static int getmax(vector<node> &A,int N,int m)
{
	vector<int>dp(N+1,0);
	for(int i = 1; i<=m; i++)
	{
		for(int j = N; j>=10; j-=10)
		{
			if(j >= A[i].value)
			{
				if(A[i].q == 0)
				{
					int tmp = dp[j - A[i].value] + A[i].value * A[i].pri;
					dp[j]=max(dp[j],tmp);
				}
			}
			else
			{
				if(j >= A[i].value + A[A[i].q].value)
				{
					int tmp1 = dp[j - A[i].value - A[A[i].q].value] + A[i].value * A[i].pri + A[A[i].q].value * A[A[i].q].value;
					dp[j] = max(dp[j],tmp1);
				}
			}
		}
	}
	return dp[N];
}
int main()
{
	int N,m;
	while(cin>>N>>m)
	{
		int v,p,q;
		vector<node> A(65);
		for(int i = 1;i<=m;i++)
		{
		cin>>v>>p>>q;
		node B;
		B.value = v;
		B.pri = p;
		B.q = q;
		A[i] = B;
		}
		int ret = getmax(A,N,m);
		cout<<ret<<endl;
	}
	return 0;
}
