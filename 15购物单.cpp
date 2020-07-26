#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node
{
	int value;
	int pri;//重要度 
	int q;
};
static int GetMax(vector<node> &A,int N,int m)
{
	vector<int> dp(N + 1, 0);
	//01背包问题，建立一维表记录历史最优解
	for (int i = 1; i <= m; i++)
	{
		for (int j = N; j >= 10; j -= 10)
		{
			if (j >= A[i].value)
			{
				//如果为主件，取加入该主件和不加入该主件，价格*重要度的最大值
				if (A[i].q == 0)
				{
					int tmp = dp[j - A[i].value] + A[i].value * A[i].pri;
					dp[j] = max(dp[j], tmp);
				}
				else
				{
					//如果为非主件，同时也要加入相对应主件
					if (j >= A[i].value + A[A[i].q].value)
					{
						int tmp = dp[j - A[i].value -A[A[i].q].value] +A[i].value * A[i].pri + A[A[i].q].value * A[A[i].q].pri;
						dp[j] = max(dp[j], tmp);
					}
				}
			}
		}
	}
	return dp[N];
}
int main()
{
	int N, m;
	while (cin >> N >> m)
	{
		int v, p, q;
		int k0 = 0, k1 = 0;
		vector<node> A(60);
		int total;
		//输入全部
		for (int i = 1; i<=m; i++)
		{
			cin >> v >> p >> q;
			node p16;
			p16.value = v;
			p16.pri = p;
			p16.q = q;
			A[i]=p16;
		}
		int ret = GetMax(A, N, m);
		cout << ret << endl;
	}
	return 0;
}
