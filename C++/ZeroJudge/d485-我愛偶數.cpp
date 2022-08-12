#include<iostream>

using namespace std;

int main(void)
{
	long long a,b;
	while(cin>>a>>b)
	{
		if(a==b && a%2 !=0)
		{
			cout<<0<<endl;
		}
		else if(a==b && a%2==0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<(b-a)/2+1<<endl;
		} 
	}
	return 0;
 } 
