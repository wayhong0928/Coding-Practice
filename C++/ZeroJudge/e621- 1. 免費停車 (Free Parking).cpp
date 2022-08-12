#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,n;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		bool checkout=false;
		for(int i=a+1;i<b;i++)
		{
			if(i%c!=0)
			{
				cout<<i<<" ";
				checkout=true;
			}
		}
		if(checkout==false)
		{
			cout<<"No free parking spaces.";
		}
		cout<<endl;
	}
	return 0;
}
