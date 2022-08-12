#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int a;
	while(cin>>a)
	{
		bool check=false;
		for(int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				cout<<"no"<<endl;
				check=true;
				break;
			}
		}
		if(check==false)
		{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
