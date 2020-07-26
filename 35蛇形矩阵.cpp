#include<iostream>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		int head = 1;
		for(int i = 0; i<num; i++)
		{
			head += i;
			int before = head;
			cout<<head;
			if(i == num - 1)
			{
				cout<<endl;
			}
			int interval = i + 2;
			int row = num - i;
			for(int j = 1; j<row; j++)
			{
				if(j != row - 1)
				{
					cout<<" "<<before + interval;
					before += interval;
					interval++;
				}
				else
				{
					cout<<" "<<before + interval<<endl;
				}
			}
		}
	}
	return 0;
}
