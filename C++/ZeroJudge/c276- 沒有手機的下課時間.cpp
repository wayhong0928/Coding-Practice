#include<iostream>

using namespace std;

int main(void)
{
	char ans[4],m[4];
	int n,a,b;
	for(int i=0;i<4;i++)
	{
		cin>>ans[i];
	}
	cin>>n;
	while(n--)
	{
		a=0;
		b=0;
		for(int i=0;i<4;i++)
		{
			cin>>m[i];
			for(int j=0;j<4;j++)
			{
				if(m[i]==ans[i])
				{
					a++;
					break;
				}
				else if(m[i]==ans[j])
				{
					b++;
					break;
				}
			}
		}
		cout<<a<<"A"<<b<<"B"<<endl;
	}
	return 0;
}
