#include<iostream>

using namespace std;

int main(void)
{
	int n,a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if(a+b>c && a+c>b && b+c>a)
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<"Wrong!!"<<endl;
		}
	}
	return 0;
}

