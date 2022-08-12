#include<iostream>

using namespace std;

int main(void)
{
	
	int a[10],b,count;
	count=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cin>>b;
	b=b+30;
	for(int i=0;i<10;i++)
	{
		if(b>=a[i])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
