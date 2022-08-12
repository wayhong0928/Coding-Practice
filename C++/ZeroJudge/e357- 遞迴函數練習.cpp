#include<iostream>

using namespace std;

int f(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n%2==0)
	{
		return f(n/2);
	} 
	else
	{
		return f(n-1)+f(n+1);
	}
	
}
int main(void)
{
	int n;
	while(cin>>n)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}
