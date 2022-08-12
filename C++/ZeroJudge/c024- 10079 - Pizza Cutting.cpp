#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	while(cin>>n)
	{
		if(n<0)
		{
			break;
		}
		else
		{
			cout<<1+((1+n)*n/2)<<endl;
		}
	}
	return 0;
}
