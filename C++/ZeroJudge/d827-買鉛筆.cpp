#include<iostream>

using namespace std;

int main(void)
{
	int n,num=0;
	while(cin>>n)
	{
		while(n>=12)
		{
			num+=50;
			n-=12;
		}
		cout<<n*5+num<<endl;
	}
	return 0;
 } 
