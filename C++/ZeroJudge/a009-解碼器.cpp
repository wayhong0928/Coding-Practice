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
			a[i]-=7;
			cout<<a[i];
		}
		cout<<endl;
	}	
	return 0;
}
