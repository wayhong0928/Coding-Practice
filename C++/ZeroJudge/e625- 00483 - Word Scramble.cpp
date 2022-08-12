#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b;
	while(getline(cin,a))
	{
		b="";
		for(int i=0;i<a.length();i++)
		{
			if(a[i]!=' ')
			{
				b=a[i]+b;
			}
			if(a[i]==' ')
			{
				cout<<b<<" ";
				b="";
			}
			if(i+1==a.length())
			{
				cout<<b<<endl;
			}
			else if(a[i]==EOF || a[i]=='.')
			{
				cout<<b<<endl;
				b="";
			}
		}
	}
	return 0;
}
