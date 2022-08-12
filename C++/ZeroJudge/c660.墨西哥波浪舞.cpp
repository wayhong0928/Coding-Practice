#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string n,m;
	while(getline(cin,n))
	{
		for(int i=0;i<n.length();i++)
		{
			if(n[i]<='Z' && n[i]>='A')
			{
				m+=(n[i]+32);
			}
			else
			{
				m+=n[i];
			}
		}
		for(int i=0;i<m.length();i++)
		{
			if(m[i]>='a' && m[i]<='z')
			{
				m[i]-=32;
				cout<<m<<endl;
				m[i]+=32;
			}
		}
	}
	return 0;
 } 
