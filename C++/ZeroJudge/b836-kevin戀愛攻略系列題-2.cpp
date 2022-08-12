#include<iostream>

using namespace std;

int main(void)
{ 
	long long n,m;
	while(cin>>n>>m)
	{
		if(m==0)
		{
			cout<<"Go Kevin!!"<<endl;
		}
		else
		{
			n=(n-1)%m;
			if(n==0)
			{
				cout<<"Go Kevin!!"<<endl;
			}
			else
			{
				cout<<"No Stop!!"<<endl;
			}
		}
	}
	return 0;
 } 
