#include<iostream>

using namespace std;

int main(void)
{
	int n,m;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			a[i]=i+1;
		}
		for(int i=0;i<3;i++)
		{
			cin>>m;
			a[m-1]=-1;
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]>0)
			{
				cout<<"No. "<<i+1<<endl;
			}
		}
	}
	return 0;
}
