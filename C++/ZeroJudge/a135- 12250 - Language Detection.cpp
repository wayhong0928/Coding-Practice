#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	int c=0;
	while(cin>>s) 
	{
		c++;
		if(s=="#")
		{
			break;
		}
		else
		{
			if(s=="HELLO")
			{
				cout<<"Case "<<c<<": ENGLISH"<<endl;
			}
			else if(s=="HOLA")
			{
				cout<<"Case "<<c<<": SPANISH"<<endl;
			}
			else if(s=="HALLO")
			{
				cout<<"Case "<<c<<": GERMAN"<<endl;
			}
			else if(s=="BONJOUR")
			{
				cout<<"Case "<<c<<": FRENCH"<<endl;
			}
			else if(s=="CIAO")
			{
				cout<<"Case "<<c<<": ITALIAN"<<endl;
			}
			else if(s=="ZDRAVSTVUJTE")
			{
				cout<<"Case "<<c<<": RUSSIAN"<<endl;
			}
			else
			{
				cout<<"Case "<<c<<": UNKNOWN"<<endl;
			}
		}
	}
	return 0;
}
