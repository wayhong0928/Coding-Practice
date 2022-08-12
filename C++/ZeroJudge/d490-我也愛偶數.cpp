#include<iostream>

using namespace std;

int main(void)
{
	long long a,b,sum;
	while(cin>>a>>b)
	{
		sum=0;
		for(int i=a;i<=b;i++)
		{
			if(i%2==0)
			{
				sum+=i;
				i++;	
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
