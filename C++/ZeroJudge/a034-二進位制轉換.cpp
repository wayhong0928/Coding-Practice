#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n;
	string ans;
	while(cin>>n)
	{	
		ans="";
		while(n>0)
		{
			if(n%2!=0)
			{
				n=n/2;
				ans='1'+ans;	
			}	
			else
			{
				n=n/2;
				ans='0'+ans;
			}
		}	
		cout<<ans<<endl;
	}	
	return 0;
} 
