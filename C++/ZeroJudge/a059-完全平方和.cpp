#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int count=0,n=0,m=0,sum=0,a=0;  
	//count計算次數 a輸出case順序 
	cin>>count;
	while(count--)
	{
		a++;
		cin>>n>>m;
		sum=0;
		for(int i=n;i<=m;i++)
		{
			for(int j=1;j<=sqrt(m);j++)
			{
				if(i==j*j)
				{
					sum+=i;	
				} 
			} 
		}
		cout<<"Case "<<a<<": "<<sum<<endl;
	}
	return 0;
 } 
