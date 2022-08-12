#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	while(getline(cin,a))
	{
		for(int i=0;i<a.length();i++)
		{
			if(i==a.length()-1)
			{
				cout<<int(a[i]);
			}
			else
			{
				cout<<int(a[i])<<"_";
			}
		}
	}
	return 0;
} 
