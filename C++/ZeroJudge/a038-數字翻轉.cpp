#include<iostream>

using namespace std;

int main(void)
{
	int n,m;
	while(cin>>n)
	{
		m=0;
		while(n>0)
		{
			m*=10;
			m+=n%10;
			n=n/10;
		}
		cout<<m<<endl;
	}
	return 0;
}
