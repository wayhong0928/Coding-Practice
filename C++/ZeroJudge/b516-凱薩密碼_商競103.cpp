#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	int n;
	cin>>n;
	while(cin>>a)
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]+3>90)
			{
				cout<<char(a[i]-23);
			}
			else
			{
				cout<<char(a[i]+3);
			}
		}
		cout<<endl;
	}
	return 0;
}
