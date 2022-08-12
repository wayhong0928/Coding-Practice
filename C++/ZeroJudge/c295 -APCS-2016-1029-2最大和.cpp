#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	int n,m,sum=0;
	cin>>n>>m;
	int a[n][m+1];
	bool check=false; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			a[i][m]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>a[i][m])
			{
				a[i][m]=a[i][j];
			}
		}
		sum+=a[i][m];
	}
	cout<<sum<<endl;
	for(int i=0;i<n;i++)
	{
		if(sum%a[i][m]==0)
		{
			cout<<a[i][m]<<" ";
			check=true;
		}
	}
	if(check==false)
	{
		cout<<-1<<endl;
	}
	return 0;
}
