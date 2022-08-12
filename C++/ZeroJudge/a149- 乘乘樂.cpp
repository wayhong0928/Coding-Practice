#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	string m;
	long long a;
	while(n)
	{
		a=1;
		cin>>m;
		for(int i=0;i<m.length();i++)
		{
			a=a*(m[i]-48);
		}
		cout<<a<<endl;
		n--;
	}
	return 0;
}
