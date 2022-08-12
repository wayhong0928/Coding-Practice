#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b;
	while(cin>>a>>b)
	{
		cout<<(b[0]-a[0]+26)%26<<endl;
	}
	return 0;
}
