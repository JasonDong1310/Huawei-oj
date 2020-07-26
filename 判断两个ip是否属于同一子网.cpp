#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int j;
	int a[4]= {0},b[4]= {0},c[4]= {0};
	while(scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3])!=EOF)
	{
		scanf("%d.%d.%d.%d",&b[0],&b[1],&b[2],&b[3]);
		scanf("%d.%d.%d.%d",&c[0],&c[1],&c[2],&c[3]);
		int d[4]= {0},e[4]= {0};
		int flag=0;

		for(int i=0; i<4; i++)
		{
			if(a[i]<0||a[i]>255||b[i]<0||b[i]>255||c[i]<0||c[i]>255)
			{
				printf("1\n");
				flag=1;
				break;
			}
			d[i]=a[i]&b[i];
			e[i]=a[i]&c[i];
		}
		if(flag==0)
		{
			if(0==memcmp(d,e,4)) printf("0\n");
			else printf("2\n");
		}
	}
	return 0; 
}
