#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	char b;
	while(cin>>a)
	{
		b=a.length();
		if(a[0]==a[b-1])
		{
			cout<<"yes"<<endl;	
		}	
		else
		{
			cout<<"no"<<endl;
		}
	}	
	return 0;
 } 
