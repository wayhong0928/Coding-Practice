#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,p,n,m,m1,max;
	while(cin>>n>>m)
	{
		max=0;
		m1=m;
		for(int i=0;i<n;i++)
		{
			m=m1;
			a=0;
			b=0;
			cin>>a>>b;
			p=0;
			if(b<30)
			{
				while(m>=1000)
				{
					m-=1000;
					p+=10;
				}
				a+=p;
				if(a>max)
				{
					max=a;
					c=i+1;
				}
			}
			else if(b<40)
			{
				while(m>=1000)
				{
					m-=1000;
					p+=50;
				}
				a+=p;
				if(a>max)
				{
					max=a;
					c=i+1;
				}
			}
			else
			{
				while(m>=1000)
				{
					m-=1000;
					p+=100;
				}
				a+=p;
				if(a>max)
				{
					max=a;
					c=i+1;
				}
			}
		}
		cout<<c<<" "<<max<<endl;
	}
	return 0;
}
