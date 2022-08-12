#include<iostream>

using namespace std;

int main(void)
{
	int x,y;
	while(cin>>x>>y)
	{
		x=(x+2+(y+30>=60))%24;
		y=((y+30>=60)?(y+30)%60:y+30);
		if(x<10)
		{
			cout<<"0"<<x<<":";
		}
		else
		{
			cout<<x<<":";
		}
		if(y<10)
		{
			cout<<"0"<<y<<endl;
		}
		else
		{
			cout<<y<<endl;
		}
	}
	return 0;
}
