#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	bool check=false;
	while(cin>>n>>m)
	{
		check=false; 
		int a[n][m];
		for(int i=0;i<m;i++)
		{
			cin>>a[0][i];
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;i<m;j++)
			{
				cin>>a[i][j];
				if(check==false)
				{
					for(int k=0;k<m;k++)
					{
						if(a[i][j]!=a[i-1][k])
						{
							check=true;
						}
					}
				}
			}
		}
		if(check==true)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
