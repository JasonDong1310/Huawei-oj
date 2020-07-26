#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#pragma GCC optimize(2)
using namespace std;
#define min(a,b) ((a<b) ? a: b)
int ldistance(const string source,const string target)
{
	int n = source.length();
	int m = target.length();
	if(m == 0) return n;
	if(n == 0) return m;
	typedef vector<vector<int>> Tmartix;
	Tmartix matrix(n+1);//1.ππΩ®æÿ’Û 
	for(int i = 0;i<=n;i++) matrix[i].resize(m+1);
	//2.≥ı ºªØæÿ’Û 
	for(int i = 1;i<=n;i++) matrix[i][0] = i;
	for(int i = 1;i<=m;i++) matrix[0][i] = i;
	//3.levenshtein
	for(int i = 1;i<=n;i++)
	{
		const char si = source[i-1];
		for(int j = 1;j<=m;j++)
		{
			const char dj = target[j-1];
			int cost;
			if(dj == si) cost = 0;
			else cost = 1;
			const int above = matrix[i-1][j] + 1;
			const int left = matrix[i][j-1] + 1;
			const int diag = matrix[i-1][j-1] + cost;
			matrix[i][j] = min(above,min(left,diag));	
		}	
	}
	return matrix[n][m];
}
int main()
{
	string a,b;
	std::ios::sync_with_stdio(false);
	while(cin>>a>>b)
	{
//		cout<<"◊÷∑˚¥Ææ‡¿Î"<<ldistance(a,b)<<endl;	
//		int n = a.length();
//		int m = b.length();
//		double c = ldistance(a,b);
//		double sim = double(1 - (double(c / max(n,m))));
//		cout<<"œ‡À∆∂»"<<sim<<endl;
		cout<<ldistance(a,b)<<endl;
	}	
	return 0;
}
