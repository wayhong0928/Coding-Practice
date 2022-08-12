#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	while(cin>>a)
	{
		for(int i=a.length();i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				cout<<a[j];
			}
			cout<<endl;
		}
	}
	return 0;
}
