#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int n,line,check;
	while(cin>>n)
	{
		line=0;
		for(int i=2;i<=n;i++)
		{
			check=0;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					check=1;
					break;
				}
			}
			if(check==0)
			{
				if(i<10)
				{
					cout<<"         "<<i;
				}
				else if(i<100)
				{
					cout<<"        "<<i;
				}
				else
				{
					cout<<"       "<<i;
				}
				line++;
				if(line==5)
				{
					line=0;
					cout<<endl;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
