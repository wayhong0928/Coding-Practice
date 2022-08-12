#include<iostream>

using namespace std;

int main(void)
{
	int n,m;
	while(cin>>n)
	{
		m=n%3;
		n=n/3+1-(m==0);
		cout<<n<<endl;
	}
	return 0;
 } 
