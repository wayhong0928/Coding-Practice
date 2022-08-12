#include<iostream>

using namespace std;

void f(int n,int sum)
{
	if(n==0)
	{
		cout<<" = "<<sum<<endl;
	}
	else
	{
		sum=sum*n;
		if(sum==n)
		{
			cout<<n;
		}
		else
		{
			cout<<" * "<<n;
		}
		return f(n-1,sum);
	}
}

int main(void)
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			cout<<"0! = 1 = 1"<<endl;
		}
		else
		{
			cout<<n<<"! = ";
			f(n,1);
		}
	}
	return 0;
}
