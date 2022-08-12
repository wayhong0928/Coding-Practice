#include<iostream>
#include<cstdlib>

using namespace std;

int f(int);
int dp(int);
int a[100]; //全域 已初始化 


int f(int n)  //遞迴 
{
	if(n>1)
	{
		return f(n-1)+f(n-2);
	}
	else if(n==1)
	{
		return 1;
	}
	else if(n==0)
	{
		return 0;
	}
}

int dp(int n)  //dp
{
	if(n==1)
	{
		return 1;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		if(a[n-1]==0 && n-1>1)
		{
			a[n-1]=dp(n-2)+dp(n-3);
		}
		if(a[n-2]==0 && n-2>1)
		{
			a[n-2]=dp(n-3)+dp(n-4);
		}
		return a[n-1]+a[n-2];
	}
}

int main(void)
{
	int n;
	cin>>n;
	a[0]=0;
	a[1]=1;
	cout<<f(n);
	return 0;
}

