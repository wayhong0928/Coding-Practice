#include<iostream>

using namespace std;

int f(int n)
{
	if(n<=100)
	{
		return f(f(n+11));
	}
	else if(n>=101)
	{
		return n-10;
	}
}

int main(void)
{ 
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			cout<<"f91("<<n<<") = "<<f(n)<<endl;
		}
	}
	return 0;
}
