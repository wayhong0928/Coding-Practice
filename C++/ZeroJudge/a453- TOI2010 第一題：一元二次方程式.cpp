#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	double a,b,c,d,n;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		d=b*b-4*a*c;
		if(d<0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			d=sqrt(d);
			int t =int(d);
			if(t==d)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
