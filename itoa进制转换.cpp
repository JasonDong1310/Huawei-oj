#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;
//int main()
//{
//	long long num;
//	cin>>num;
//	char str[1050];
//	itoa(num,str,2); // ��ʮ����ת��Ϊ2���Ʊ�����str�ַ�������
////	long long n = atoi(itoa(num,str,10)); //ʮ������תchar��ת���������� 
//	cout<<str;
//	return 0; 
//}
//atoi���ص�������int������,��atoi�޷������ȷ����ʱ,ʹ��stringstream
unsigned long long stou(const string &str)
{
	long long n;
	stringstream ss;
	ss<<str;
	ss>>n;
	return n;	
}
int main()
{
	string s = "345678432123";
	unsigned long long n = stou(s);
	cout<<n<<endl;
	return 0;	
} 
