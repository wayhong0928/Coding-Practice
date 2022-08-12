#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double a,b;
	while(cin>>a>>b)
	{
		setw(a+b+4);
		cout<<setprecision(4)<<fixed<<a/b*1000<<endl;
	}
	return 0;
}
