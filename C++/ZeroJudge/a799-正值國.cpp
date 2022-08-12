#include<iostream>

using namespace std;

int main(void)
{
	long long n;
	while(cin>>n)
	{
		if(n<0)
		{
			cout<<n*-1<<endl;
		}
		else
		{
			cout<<n<<endl;
		}
	}
	return 0;
}
