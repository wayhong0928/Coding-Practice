#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c=0,sum;
	while(cin>>a>>b)
	{
		sum=0;
		if(a>b)
		{
			c=a;
			a=b;
			b=c;
		}
		if(a==b)
		{
			if(a%2==0)
			{
				cout<<a<<endl;
			}
			else
			{
				cout<<0<<endl;	
			} 
		}
		else 
		{
			for(int i=a;i<=b;i++)
			{
				if(i%2==0)
				{
					sum+=i;
					i++;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
