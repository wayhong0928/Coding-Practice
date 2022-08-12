#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,d,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if (a==b && b==c && c==d)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d<<endl;
		}
		else if(d-c==c-b)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+(d-c)<<endl;
		}	
		else if(d/c==c/b)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(d/c)<<endl;
		}
	}
	return 0;
}
