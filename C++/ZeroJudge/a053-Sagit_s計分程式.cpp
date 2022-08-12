#include<iostream>

using namespace std;

int main(void)
{
	int n,a;
	while(cin>>n)
	{
		a=n;
		if(n>10)
		{
			if(n>20)
			{
				if(n>=40)
				{
					cout<<100<<endl;
					break; 
				}
				else
				{
					a=n-20;
					cout<<80+a<<endl;
				} 
			}
			else
			{
				a=n-10;
				cout<<a*2+60<<endl;
			}
		}
		else
		{
			cout<<n*6<<endl;
		}
	}	
	return 0;
} 
