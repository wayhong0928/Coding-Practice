#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned a,b,r;
	while(cin>>r>>a)
	{
		if(a==r)
		{
			a-=3;
		}
		b=r-a;
		if(a>b)
		{
			swap(a,b);
		}
		cout<<a<<"+"<<b<<"="<<r<<endl;
		
	}
	return 0;
}
