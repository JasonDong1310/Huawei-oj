#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		int x=0,y=0;
		while(a.size()>1)
		{
			int sep = a.find(";");
			string tmp = a.substr(1,sep - 1);
			if(tmp.size() == 1 || tmp.size() == 2)
			{
				char *offset;
				int inext = strtol(tmp.c_str(),&offset,10);
				switch(a[0])
				{
					case 'A':
						x-=inext;
						break;
					case 'D':
						x +=inext;
						break;
					case 'W':
						y+=inext;
						break;
					case 'S':
						y-=inext;
						break;
					default:
						break;
				}
			}
			a = a.substr(sep+1,a.size() - sep - 1);
		}
		cout<<x<<","<<y<<endl;
	}
	return 0;
}

/*c_str c_str()函数返回一个指向正规C字符串的指针, 内容与本string串相同，
	这是为了与c语言兼容，在c语言中没有string类型，故必须通过string类对象的成员函数c_str()把string 对象转换成c中的字符串样式。

				long int strtol(const char *nptr, char **endptr, int base)
		strtol()会将nptr指向的字符串，根据参数base，按权转化为long int, 然后返回这个值。
		参数base的范围为2~36,和0；它决定了字符串以被转换为整数的权值。
		可以被转换的合法字符依据base而定，举例来说，当base为2时，合法字符为‘0’，‘1’；base为8时，合法字符为‘0’，‘1’，……‘7’；base为10时，
		合法字符为‘0’，‘1’，……‘9’；base 为16时，合法字符为‘0’，‘1’，……‘9’，‘a’，……‘f’；
		base为24时，合法字符为‘0’，……‘9’，‘a’，……‘n’，base为36时，合法字符为‘0’，……‘9’，‘a’，……‘z’；
		等等。其中，不区分大小写，比如，‘A’和‘a’会都会被转化为10。
		当字符合法时，‘0’，……‘9’依次被转换为十进制的0～9，‘a’，……‘z’一次北转换为十进制的10～35。
				*/
