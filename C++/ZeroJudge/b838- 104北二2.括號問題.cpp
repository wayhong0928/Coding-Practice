#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	int n,m,c;
	cin>>n;
	while(n--)
	{
		m=0;
		c=0;
		cin>>a;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='(')
			{
				m++;
			}
			if(a[i]==')')
			{
				m--;
				if(m<0)
				{
					break;
				}
				else
				{
					c++;
				}
			}
		}
		if(m==0)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}
