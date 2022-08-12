#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	while(cin>>n)
	{
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(m[j]>m[j+1])
				{
					swap(m[j],m[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<m[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
