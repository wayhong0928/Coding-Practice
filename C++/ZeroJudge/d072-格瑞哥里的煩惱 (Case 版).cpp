#include<iostream>

using namespace std;

int main(void)
{
	int t,y,i=1;
	cin>>t;
	while(cin>>y)
	{ 
		if(y%4==0 && y%100!=0 || y%400==0)
		{
			cout<<"Case "<<i<<": a leap year"<<endl;
		}
		else
		{
			cout<<"Case "<<i<<": a normal year"<<endl;
		}
		i++;
	}
	return 0;
}
