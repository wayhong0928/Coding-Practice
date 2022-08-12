#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	while(cin>>a)
	{
		for(int i=0;i<a.length();i++)
		{
			if(i==0 || i==a.length()-1)
			{
				cout<<a[i];
			}
			else
			{
				cout<<"_";
			}
		}
		cout<<endl;
	}
	return 0;
}

