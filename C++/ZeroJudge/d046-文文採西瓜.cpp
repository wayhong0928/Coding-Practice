#include<iostream>

using namespace std;

int main(void)
{
	int n,m,check;
	cin>>n;
	while(n--)
	{
		cin>>m;
		if(m<11)
		{
			check++;
		}
	}
	cout<<check<<endl;
	return 0;
 } 
