#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long t,a,b,c;
	cin>>t;
	bool check;
	while(t--)
	{
		check=true;
		cin>>a>>b;
		for(int i=0;i<b;i++)
		{
			cin>>c;
			if(a>c)
			{
				check=false;
			}
		}
		if(check)
		{
			cout<<"YEEES!!! INKER!"<<endl;
		}
		else
		{
			cout<<"NOOOO!!! JACKY XX!"<<endl;
		}
	}
	return 0;
}
