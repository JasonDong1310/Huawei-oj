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

/*c_str c_str()��������һ��ָ������C�ַ�����ָ��, �����뱾string����ͬ��
	����Ϊ����c���Լ��ݣ���c������û��string���ͣ��ʱ���ͨ��string�����ĳ�Ա����c_str()��string ����ת����c�е��ַ�����ʽ��

				long int strtol(const char *nptr, char **endptr, int base)
		strtol()�Ὣnptrָ����ַ��������ݲ���base����Ȩת��Ϊlong int, Ȼ�󷵻����ֵ��
		����base�ķ�ΧΪ2~36,��0�����������ַ����Ա�ת��Ϊ������Ȩֵ��
		���Ա�ת���ĺϷ��ַ�����base������������˵����baseΪ2ʱ���Ϸ��ַ�Ϊ��0������1����baseΪ8ʱ���Ϸ��ַ�Ϊ��0������1����������7����baseΪ10ʱ��
		�Ϸ��ַ�Ϊ��0������1����������9����base Ϊ16ʱ���Ϸ��ַ�Ϊ��0������1����������9������a����������f����
		baseΪ24ʱ���Ϸ��ַ�Ϊ��0����������9������a����������n����baseΪ36ʱ���Ϸ��ַ�Ϊ��0����������9������a����������z����
		�ȵȡ����У������ִ�Сд�����磬��A���͡�a���ᶼ�ᱻת��Ϊ10��
		���ַ��Ϸ�ʱ����0����������9�����α�ת��Ϊʮ���Ƶ�0��9����a����������z��һ�α�ת��Ϊʮ���Ƶ�10��35��
				*/
