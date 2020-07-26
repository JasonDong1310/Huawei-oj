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
//	itoa(num,str,2); // 将十进制转化为2进制保存在str字符数组中
////	long long n = atoi(itoa(num,str,10)); //十进制先转char再转二进制整数 
//	cout<<str;
//	return 0; 
//}
//atoi返回的是最大的int型数据,当atoi无法输出正确的数时,使用stringstream
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
