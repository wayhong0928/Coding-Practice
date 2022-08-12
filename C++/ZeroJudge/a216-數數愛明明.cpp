#include<iostream>

using namespace std;

int main(void)
{
	long long n,f,g; 
	while(cin>>n)
	{
		f=0;
		g=0;
		for(int i=1;i<=n;i++)
		{
			f+=i;
			g=f+g;	
		}
		cout<<f<<" "<<g<<endl;
	}
	return 0;
}
