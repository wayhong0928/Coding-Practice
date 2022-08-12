#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	int n,sum;
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>a;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='X')
			{
				sum+=2;
			}
			else if(a[i]=='H')
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
