#include<iostream>

using namespace std;

int main(void)
{
	int n,m;
	while(cin>>n)
	{
		m=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				m+=i;
			}
		}
		if(m>n)
		{
			cout<<"盈數";
		}
		else if(m==n)
		{
			cout<<"完全數";
		}
		else
		{
			cout<<"虧數";
		}
		cout<<endl;
	}
	return 0;
}
