#include<iostream>

using namespace std;

int main(void)
{
	int a,b,sum;
	while(cin>>a>>b)
	{
		sum=0;
		for(int i=a;i<=b;i++)
		{
			if(i%4==0 && i%100 !=0 || i%400==0)
			{
				sum++;
				i+=3;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
