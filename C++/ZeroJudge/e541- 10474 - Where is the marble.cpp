#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,q,count=0;
	bool c=false;
	while(cin>>n>>q)
	{
		if(n==0 && q==0)
		{
			break;
		}
		else
		{
			count++;
			int a[n]={0},b;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			cout<<"CASE# "<<count<<":"<<endl;
			for(int i=0;i<q;i++)
			{
				c=false;
				cin>>b;
				for(int j=0;j<n;j++)
				{
					if(b==a[j])
					{
						cout<<b<<" found at "<<j+1<<endl;
						c=true;
						break;
					}
				}
				if(c==false)
				{
					cout<<b<<" not found"<<endl;
				}
			}
		}
	}
	return 0;
}
