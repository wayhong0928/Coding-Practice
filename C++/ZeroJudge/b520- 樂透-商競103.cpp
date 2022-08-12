#include<iostream>

using namespace std;

int main(void)
{
	int n,a[5],b[5],count;
	char t;
	cin>>n;
	while(n--)
	{
		count=0;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
			if(i<4)
			{
				cin>>t;
			}
		}
		for(int i=0;i<5;i++)
		{
			cin>>b[i];
			if(i<4)
			{
				cin>>t;
			}
			for(int j=0;j<5;j++)
			{
				if(b[i]==a[j])
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
