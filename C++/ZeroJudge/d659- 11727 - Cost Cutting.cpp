#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int a[3],n,c;
	while(cin>>n)
	{
		c=0;
		while(n--)
		{
			c++;
			for(int i=0;i<3;i++)
			{
				cin>>a[i];
			}
			sort(a,a+3);
			cout<<"Case "<<c<<": "<<a[1]<<endl;
		}	
	}
	return 0;
}
