#include<iostream>

using namespace std;

int main(void)
{
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(b2<a2)
	{
		b2+=60;
		b1-=1;
	}
	if(b1<a1)
	{
		b1+=24;
	}
	cout<<b1-a1<<" "<<b2-a2<<endl;
	return 0;
}
