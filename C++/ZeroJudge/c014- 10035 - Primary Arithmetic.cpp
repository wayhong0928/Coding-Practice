#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b;
	int c;
	while(cin>>a>>b)
	{ 
		if(a=="0" && b=="0")
		{
			break;
		}
		else
		{
			c=0;
			while(a.length()<b.length())
			{
				a='0'+a;
			}
			while(a.length()>b.length())
			{
				b='0'+b;
			}
			for(int i=a.length()-1;i>=0;i--)
			{
				if(b[i]-48+a[i]-48>9)
				{
					b[i]=a[i]+a[i]-10;
					c++;
					b[i-1]++;
				}
			}
			if(c==0)
			{
				cout<<"No carry operation."<<endl;
			}
			else if(c<2)
			{
				cout<<c<<" carry operation."<<endl;
			}	
			else
			{
				cout<<c<<" carry operations."<<endl;
			}
		}		
	}
	return 0;
}
