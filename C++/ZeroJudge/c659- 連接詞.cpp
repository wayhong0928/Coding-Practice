#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b,c; 
	while(cin>>a)
	{
		c="";
		getline(cin,b);
		for(int i=1;i<b.length();i++)
		{
			c+=b[i];
			if(b[i]==' ')
			{
				cout<<c<<a<<" ";
				c="";
			}
			else if(i+1== b.length())
			{
				cout<<c;
				c="";
			}
		}
	}	
	return 0;
}
