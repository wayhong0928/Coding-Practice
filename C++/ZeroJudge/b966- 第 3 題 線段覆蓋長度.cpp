#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool *c=new bool [10000000];
	int n,l,r,count=0;
	cin>>n;
	while(n--)
	{
		cin>>l>>r;
		if(l>r)
		{
			swap(l,r);
		}
		for(int i=l;i<r;i++)
		{
			if(c[i]==false)
			{
				c[i]=true;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
