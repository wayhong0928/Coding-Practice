#include<iostream>

using namespace std;

int main(void)
{
	long long a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a*c>=b)
		{
			cout<<a<<" "<<b<<" "<<c<<". I will make it!"<<endl;
		}
		else
		{
			cout<<a<<" "<<b<<" "<<c<<". I will be late!"<<endl;
		}
	}
	return 0;
}
