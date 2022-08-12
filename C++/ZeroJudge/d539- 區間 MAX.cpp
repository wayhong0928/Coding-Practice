#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,a,b,c;
	while(cin>>n)
	{
		int *m=new int[500001],max;
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		cin>>c;
		for(int i=0;i<c;i++)
		{
			max=0;
			cin>>a>>b;
			if(a>b)
			{
				swap(b,a);
			}
			for(int j=a-1;j<b;j++)
			{
				if(m[j]>max)
				{
					max=m[j];
				}
			}
			cout<<max<<endl;
		}
	}
	return 0;
}
