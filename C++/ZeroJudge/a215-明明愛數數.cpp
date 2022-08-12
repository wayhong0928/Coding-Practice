#include<iostream>

using namespace std;

int main(void)
{
	int n,m,sum=0,c=0;
	while(cin>>n>>m)
	{
		sum=0;
		c=0;
		if(n>m)
		{
			cout<<'1'<<endl;
		}
		else if(n<m)
		{
			for (int i=1;i<m;i++)
			{
				sum=sum+n+i;
				c+=1;
				if(sum>m)
				{
					break;
				}	
			}
			cout<<c<<endl;	
		}
	}
		return 0;
}
