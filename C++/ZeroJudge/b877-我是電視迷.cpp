#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<((a>b)?100-a+b:b-a)<<endl;
	}
	return 0;
}

