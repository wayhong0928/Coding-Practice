#include<iostream>

using namespace std;

int run(int n)
{
	if(n<2)
	{
		return 1;
	}
	else
	{
		return run(n-1)+run(n-2);
	}
}

int main(void)
{
	int n;
	while(cin>>n)
	{
		cout<<run(n)<<endl;
	}
	return 0;
}
