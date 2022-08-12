#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a,b,max=0,ans=0;
	for(int i=0;i<7;i++)
	{
		cin>>a>>b;
		if(a+b>max)
		{
			max=a+b;
			ans=i+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
