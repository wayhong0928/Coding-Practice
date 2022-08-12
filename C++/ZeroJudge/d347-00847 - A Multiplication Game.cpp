#include<iostream>

using namespace std;

int main(void)
{
	int n,p,count,check; 
	while(cin>>n)
	{
		check=1;
		count=2;
		p=1;
		while(p<n)
		{
			p*=count;
			count++;
			check++;
			if(count>9)
			{
				count=2;
			}
			cout<<count<<" ";
		}
		if(check%2==0)
		{
			cout<<"Ollie wins."<<endl;
		}
		else
		{
			cout<<"Stan wins."<<endl;
		}
	}
	return 0;
}
