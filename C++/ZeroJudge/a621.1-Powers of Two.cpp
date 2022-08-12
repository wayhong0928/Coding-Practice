#include<iostream>

using namespace std;

int main(void)
{
	int n,ans;
	while(cin>>n)
	{
		ans=1;
		cout<<"2^0 = "<<ans<<endl;
		for(int i=1;i<=n;i++)
		{
			ans=ans*2;
			cout<<"2^"<<i<<" = "<<ans<<endl;
		}
	}
	return 0;
}
