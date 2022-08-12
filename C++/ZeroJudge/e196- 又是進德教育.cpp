#include<iostream>

using namespace std;

int main(void)
{
	int n,m,b,count;
	while(cin>>n>>m)
	{
		count=0;
		int a[n]={0};
		for(int i=0;i<m;i++)
		{
			cin>>b;
			a[b-1]++;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]<2)
			{
				count++;
			}
		}
		cout<<count<<endl;
    }
}
