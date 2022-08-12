#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b,c;
	while(getline(cin,a),getline(cin,b))
	{
		c="";
		for(int i=0;i<a.length();i++)
		{
			c+=a[i];
			if(a[i]==' '||i+1==a.length())
			{ 
				cout<<b<<", "<<c<<endl;
				c="";
			}
		}
	}
	return 0;
}
