#include<iostream>
#include<cmath>

 
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m,a;	
	cin>>n;
	while(n--)
	{
		a=0;
		cin>>m;
		for(int i=2;i<=sqrt(m);i++)
		{
			if(m%i==0)
			{
				a=1;
				cout<<"N"<<endl;	
				break;
			}
		}
		if(a==0)
		{
			cout<<"Y"<<endl;
		}
	}
	return 0;
}
