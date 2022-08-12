#include<iostream>

using namespace std;

int main(void)
{
	int n,count;
	while(cin>>n)
	{
		count=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
				count++;
			}
			else
			{
				n=n*3+1;
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
