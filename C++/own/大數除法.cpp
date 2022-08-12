#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,ans="";
	int r=0,num;
	cin>>a>>num;
	for(int i=0;i<a.length();i++)
	{
		r=r*10+int(a[i]-48);
		ans+=char(r/num+48);
		r%=num;
	}
	cout<<ans<<endl;
	return 0;
}
