#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	while(cin>>a)
	{
		for(int i=0;i<a.length()-1;i++)
		{
			cout<<((a[i]>a[i+1]?a[i]-a[i+1]:a[i+1]-a[i]));
		}
		cout<<endl;
	}
	return 0;
}
