#include<iostream>
#include<cstdlib>
#include<string>

int * c = new int [1000]; 
using namespace std;

int main(void)
{
	string a,b;
	int t=0,len;
	cin>>a>>b;
	
	while(a.length()>b.length())b="0"+b;
	while(a.length()<b.length())a="0"+a;
	len=a.length();
	
	for(int i=0;i<len;i++)
	{
		c[i]=int(a[i])-48+int(b[i])-48;
	}
	
	for(int i=len-1;i>=0;i--)
	{
		if(c[i]>=10)
		{
			if(i==0)
			{
				t=1;
				c[i]-=10;
			}
			else
			{
				c[i]-=10;
				c[i-1]+=1;
			}
		}
	}
	if(t==1)
	{
		cout<<t;
	}
	for(int i=0;i<len;i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	delete [] c;
	return 0;
}

