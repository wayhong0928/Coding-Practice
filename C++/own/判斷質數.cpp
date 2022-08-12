#include<iostream>
 
using namespace std;

int main(void)
{
	bool check=true;
	for(int i=2;i<10000;i++)
	{
		check=true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				check=false;
				break;
			}
		}
		if(check==true)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
