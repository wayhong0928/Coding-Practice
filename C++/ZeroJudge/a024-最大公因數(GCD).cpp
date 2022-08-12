#include<iostream>

using namespace std;

void gcd(int a,int b)
{
	if(b==0)
	{
		cout<<a<<endl;
	}
	else
	{
		gcd(b,a%b);
	}
}

int main(void){
	int x,y;
	while(cin>>x>>y)
	{
		gcd(x,y);
	}
	return 0;
}

