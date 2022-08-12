#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; 
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			int j;
			for(int i=n;i>0;i--)
			{
				for(j=0;j<i-1;j++)
				{
					cout<<"_";
				}
				for(int k=0;k<=n-i;k++)
				{
					cout<<"+";
				}
				cout<<endl;
			}		
		}
	}
	return 0;
}
