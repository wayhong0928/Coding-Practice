#include<iostream>
#include<cstring>

using namespace std;

void l(string a,string b)
{
	while(a.length()>b.length())
	{
		b="0"+b;
	}
	while(a.length()<b.length())
	{
		a="0"+a;
	}
	string c="";
	bool check=false;
	if(a<b)
	{
		check=true;
		swap(a,b);
	}
	for(int i=a.length()-1;i>=0;i--)
	{
		if(int(a[i]-b[i])<0)
		{
			c=char(int(a[i]-b[i]+58))+c;
			a[i-1]-=1;
		}
		else
		{
			c=char(int(a[i]-b[i]+48))+c;
		}
	}
	while(c[0]=='0')
	{
		c.erase(0,1);
	}
	if(check)
	{
		cout<<'-'<<c<<endl;
	}
	else
	{
		cout<<c<<endl;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	string a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		l(a,b);
	}
}
