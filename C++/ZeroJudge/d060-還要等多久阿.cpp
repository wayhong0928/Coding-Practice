#include<iostream>

using namespace std;

int main(void)
{
	int m;
	while(cin>>m)
	{
		if(m<25)
		{
			cout<<25-m<<endl;
		}
		else if(m>25)
		{
			cout<<60-m+25<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}	
	return 0;
} 
