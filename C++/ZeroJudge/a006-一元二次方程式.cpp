#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int a,b,c,d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if (d<0)
	{
		cout<<"No real root";
	}
	else if (d==0)
	{
		cout<<"Two same roots x="<<-b/(a*2);
	}
	else if(d>0)
	{
		cout<<"Two different roots x1="<<(-b+sqrt(d))/(a*2)<<" , "<<"x2="<<(-b-sqrt(d))/(a*2);
	}
	return 0;
}
