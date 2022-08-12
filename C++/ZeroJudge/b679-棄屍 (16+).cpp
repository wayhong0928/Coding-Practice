#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long x,y,h;
	while(cin>>x)
	{
		y=x;
		h=0;
		for(long long i=1;i<=y;i++)
		{
			x-=i;
			if(x<1)
			{
				h=i;
				break;
			}
		}
		cout<<h<<endl;
	}
	return 0;
}
