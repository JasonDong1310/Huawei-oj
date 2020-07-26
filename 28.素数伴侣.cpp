#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<int>v[105];
bool flag[105];
int pre[105];
bool dfs(int k)
{
	int x;
	for(int i = 0;i<v[k].size();i++)
	{
		x = v[k][i];
		if(flag[x]) continue;
		flag[x] = true;
		if((pre[x]) == 0 || dfs(pre[x]))
		{
			pre[x] = k;
			return true;	
		} 
	}
	return false;
}
const int maxn = 80000;
bool isprime[maxn];
int nums[105];
int main()
{
	memset(isprime,1,sizeof(isprime));
	isprime[0] = isprime[1] = false;
	for(int i = 04;i<maxn;i+=2) isprime[i] = false;
	for(int i = 3;i*i<maxn;i+=2)
	{
		if(isprime[i])
		{
			for(int j = i*i;j<maxn;j+=2*i)
			{
				isprime[j] = false;
			}
		}
	}
	int n;
	while(cin>>n)
	{
		for(int i = 1;i<=n;++i) cin>>nums[i];
		for(int i = 1;i<=n;++i)
		{
			for(int j = i+1;j<=n;++j)
			{
				if(isprime[nums[i] + nums[j]])
				{
					(nums[i] & 1) ? v[i].push_back(j) : v[j].push_back(i);
					//大于2的素数一定=偶+奇，全部记录到偶数中
					//邻接表 
				}
			}
		}
		memset(pre,0,sizeof(pre));
		int ans = 0;
		for(int i = 1;i<=n;i++)
		{
			memset(flag,false,sizeof(flag));
			if(dfs(i)) ans++;
		}
		cout<<ans<<endl;
		for(int i = 1;i<=n;++i) v[i].clear(); 
	}
	return 0;
}
