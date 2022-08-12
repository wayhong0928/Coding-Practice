#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double n;
	while(cin>>n)
	{
		setw(n+3);
		cout<<setprecision(3)<<fixed<<(n-32)*5/9<<" ";
	}	
	return 0;
} 
