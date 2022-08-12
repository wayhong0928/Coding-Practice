#include<iostream>

using namespace std;

int main(void)
{
	int n,m,max;
	while(cin>>n)
	{
		max=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			if(m>max)
			{
				max=m;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
