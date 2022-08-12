#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n+1]={0};
	for(int i=0;i<=n;i++)
	{
		if(i<2)
		{
			a[i]=1;
		}
		else
		{
			a[i]=a[i-1]+a[i-2];
		}
	}
	cout<<a[n-1]<<":"<<a[n];
	return 0;
}
