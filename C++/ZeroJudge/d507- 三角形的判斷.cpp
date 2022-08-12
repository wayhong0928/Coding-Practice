#include<iostream>

using namespace std;

int main(void)
{
	int a[3]={0};
	while(cin>>a[0]>>a[1]>>a[2])
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<2-i;j++)
			{
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			}
		}
		if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2])
		{
			cout<<"acute triangle"<<endl;
		}
		else if((a[0]*a[0]+a[1]*a[1]==a[2]*a[2]))
		{
			cout<<"right triangle"<<endl;
		}
		else
		{
			cout<<"obtuse triangle"<<endl;
		}
	}
	return 0; 
}
