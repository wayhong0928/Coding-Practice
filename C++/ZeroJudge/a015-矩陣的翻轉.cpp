#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	//a=row,b=column
	while(cin>>a)
	{
		cin>>b;
		int c[a][b];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>c[i][j];
			}
		}
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<a;j++)
			{
				cout<<c[j][i]<<" ";
			}
			cout<<endl;
		}	
	}
	return 0;
 } 
