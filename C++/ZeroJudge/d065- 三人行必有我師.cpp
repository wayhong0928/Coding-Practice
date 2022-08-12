#include<iostream>

using namespace std;

int main(void)
{
	int a[3],max=0;
	while(cin>>a[0]>>a[1]>>a[2])
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<2-i;j++)
			{
				if(a[j]<a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			}
		}
		cout<<a[0]<<endl;
	}
	return 0;
}
