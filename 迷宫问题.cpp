#include<stdio.h>
#include<string.h>
#include<stack>
#include<algorithm>
#include<iostream>
using namespace std;
stack<int>s1,s2;
int map[55][55],vis[55][55];
int next[4][2]= {{1,0},{1,0},{0,-1},{-1,0}};
int n,m;
int judge(int x,int y)
{
	return x>=0&&x<n&&y>=0&&y<m&&map[x][y]==0&&!vis[x][y];
}
int dfs(int x,int y)
{
	if(x==n-1&&y==m-1)
	{
		s1.push(x);
		s2.push(y);
		return 1;
	}
	vis[x][y]=1;
	if(judge(x+1,y)&&dfs(x+1,y)||judge(x,y-1)&&dfs(x,y-1)||judge(x,y+1)&&dfs(x,y+1)||judge(x-1,y)&&dfs(x-1,y))
	{
		s1.push(x);
		s2.push(y);
		return 1;
	}
	else return 0;
	return 0;
}
void print()
{
	while(!s1.empty())
	{
		printf("(%d, %d)\n",s1.top(),s2.top());
		s1.pop();
		s2.pop();
	}
}
int main()
{
	while(cin>>n>>m)
	{
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin>>map[i][j];
		memset(vis,0,sizeof(vis));
		dfs(0,0);
		print();
	}
	return 0;
}
