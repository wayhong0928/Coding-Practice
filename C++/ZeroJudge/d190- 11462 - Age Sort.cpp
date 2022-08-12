#include<iostream>
#include<algorithm>

using namespace std;
 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	while(cin>>n)
	{
		if(n!=0)
		{
			int m[n];
			for(int i=0;i<n;i++)
			{
				cin>>m[i];
			}
			sort(m,m+n);
			for(int i=0;i<n;i++)
			{
				cout<<m[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
