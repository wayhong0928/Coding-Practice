#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		sort(m,m+n);
		if(n%2==0)
		{
			cout<<m[n/2-1];
		}
		else
		{
			cout<<m[(n-1)/2];
		}
		cout<<endl;
	}
	return 0;
}
