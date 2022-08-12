#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b;
	while(getline(cin,a))
	{
		b="";
		for(int i=0;i<a.length();i++)
		{
			b+=a[i];
			if(a[i]==' ') 
			{
				cout<<b<<"little, ";
				b="";
			}
			else if(i+1== a.length())
			{
				cout<<b<<" little Indians";
				b="";
			}
		}
	}
	cout<<endl;
	return 0;
}
