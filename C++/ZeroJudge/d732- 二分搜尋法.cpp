#include<iostream>

using namespace std;

void f(int num[],int n,int find)
{
	bool check=false;
	int mid,min=0,max=n-1;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(num[mid]==find)
		{
			check=true;
			break;
		}
		else if(num[mid]>find)
		{
			max=mid-1;
		}
		else if(num[mid]<find)
		{
			min=mid+1;
		}
	}
	if(check)
	{
		cout<<mid+1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m,find;
	cin>>n>>m;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	while(m--)
	{
		cin>>find;
		f(num,n,find);
	}
	return 0;
}
