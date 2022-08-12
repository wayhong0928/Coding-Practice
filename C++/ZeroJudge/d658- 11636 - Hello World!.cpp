#include<iostream>

using namespace std;

int main(void)
{
	int n,m,c,c1=0;
	while(cin>>n)
	{
		if(n<0)
		{
			break;
		} 
		else
		{
			c1++;
			m=1;
			c=0;
			while(m<n)
			{
				m=m*2;
				c++;
			}
			cout<<"Case "<<c1<<": "<<c<<endl;
		}
	}
	return 0;
}
