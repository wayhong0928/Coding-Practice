#include<iostream>
#include<string>
 
using namespace std;

int main(void)
{
	string a;
	cin>>a;
	for(int i=0;i<a.length()-1;i++)
	{
		cout<<a[i]<<"-";
	}
	cout<<a[a.length()-1];
	return 0;
}
