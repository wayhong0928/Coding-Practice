#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int min,max;
	bool checkmax,checkmin;
	while(cin>>n)
	{
		checkmax=false;
		checkmin=false;
		min=0;
		max=100;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>min && a[i]<60)
			{
				min=a[i];
			}
			if(a[i]<max && a[i]>59)
			{
				max=a[i];
			}
			if(a[i]<60)
			{
				checkmin=true;
			}
			else
			{
				checkmax=true;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		if(checkmin==false && checkmax==true)
		{
			cout<<"best case"<<endl<<max<<endl;
		}
		else if(checkmin==true && checkmax==false)
		{
			cout<<min<<endl<<"worst case"<<endl;
		}
		else
		{
			cout<<min<<endl<<max;
		}
	}
	return 0;
}
