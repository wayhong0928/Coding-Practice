#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	char b;
	int n;
	while(cin>>a>>n)
	{
		int ans[a.length()];
		for(int i=0;i<a.length() ;i++)
		{
			ans[i]=0;
			cout<<"*";
		}
		cout<<endl;
		while(n--)
		{
			cin>>b;
			for(int i=0;i<a.length() ;i++)
			{
				if(b==a[i])
				{
					ans[i]=1;
				}
				if(ans[i]==1)
				{
					cout<<a[i];
				}
				else
				{
					cout<<"*";
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
