#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==-1 && b==-1)
		{
			break;
		}
		else
		{
			if(a==b) 
			{
				cout<<0<<endl;
			}
			else if(a-b>50 || b-a>50)
			{
				if(a>b)
				{
					cout<<100-a+b<<endl;
				}
				else
				{
					cout<<100-b+a<<endl;
				}
			}
			else
			{
				if(a>b)
				{
					cout<<a-b<<endl;
				}
				else
				{
					cout<<b-a<<endl;
				}
			}
		}
	}
	return 0;
}
