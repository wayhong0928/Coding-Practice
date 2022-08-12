#include<iostream>

using namespace std;

int main(void)
{
	int a1,an,d;
	while(cin>>a1>>an>>d)
	{
		if(d<0)
		{
			for(int i=a1;i>=an;i+=d)
			{
				cout<<i<<" ";
			}
		}
		else
		{
			for(int i=a1;i<=an;i+=d)
			{
				cout<<i<<" "; 
			} 			
		}
		cout<<endl;
	}
	return 0;
}
