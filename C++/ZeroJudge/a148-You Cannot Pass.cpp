#include<iostream>

using namespace std;

int main(void)
{
	int n;
	double sum;
	while(cin>>n)
	{
		sum=0;
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			sum+=m[i];
		}
		if(sum>59*n)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
	}
	return 0;
 } 
