#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	int i,j;
	int c=0;
	bool b;
	for(i=2;i<100;i++)
	{
		b=false;
		for(j=2;j<i;j++)
		{
			if (i % j ==0)
			{
				b=true;
				break;
			}
		}
		if(b==false)
		{
			if(i<10)
			{
				cout<<setw(1)<<"0";
			}
			cout<<i<<" ";
			c++;
			if(c %5==0)
			{
				cout<<endl;
			}
		}
	}
	return 0;
}

