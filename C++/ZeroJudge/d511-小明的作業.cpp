#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,ans=0;
	for(int i=0;i<5;i++)
	{
		while(cin>>a>>b>>c)
		{
			if(a+b>c and a+c>b and b+c>a)
			{
				ans++;
			}
			break;
		}
	}	
	cout<<ans;
	return 0;
 } 
