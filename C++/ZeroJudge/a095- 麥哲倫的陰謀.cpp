#include<iostream>

using namespace std;

int main(void)
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==m)
		{
			cout<<m<<endl;
		}
		else
		{
			cout<<m+1<<endl;
		}
	}
	return 0;
}
