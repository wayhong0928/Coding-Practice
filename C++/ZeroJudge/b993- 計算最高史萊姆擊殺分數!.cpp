#include<iostream>

using namespace std;

int main(void)
{
	int n;
	long long a,max;
	while(cin>>n)
	{
		max=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>max)
			{
				max=a;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
