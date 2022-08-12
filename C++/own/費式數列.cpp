#include<iostream>

using namespace std;

int s(int a)
{
	if(a==0)
	{
		return a=0;
	}
	else if(a==1)
	{
		return a=1;
	}
	else
	{
		return s(a-1)+s(a-2);
	}
}

int main(void)
{
	int n;
	while(cin>>n)
	{
		cout<<s(n)<<endl;
	}
	return 0;
}
