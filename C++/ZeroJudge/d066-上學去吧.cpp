#include<iostream>

using namespace std;

int main(void)
{
	int h,m;
	while(cin>>h>>m)
	{
		if(h>=7 and m>=30 and h<17 || h>7 and h<17)
		{
			cout<<"At School"<<endl;
		}
		else
		{
			cout<<"Off School"<<endl;
		}
	}
	return 0;
 } 
