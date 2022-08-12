#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,count=0;
	while(cin>>n)
	{
		count=0;
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(m[j]>m[j+1])
				{
					swap(m[j],m[j+1]);
					count++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<count<<endl;
	}
	return 0;
}
