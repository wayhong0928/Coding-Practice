#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n,count=0,ck=0,cd=0,ch=0;
	string a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a=="Get_Kill")
		{
			ck++;
			count++;
			switch(count)
			{
				case 1 ... 2:
					cout<<"You have slain an enemie.";
					break;
				case 3:
					cout<<"KILLING SPREE!";
					break;
				case 4:
					cout<<"RAMPAGE~";
					break;
				case 5:
					cout<<"UNSTOPPABLE!";
					break;
				case 6:
					cout<<"DOMINATING!";
					break;
				case 7:
					cout<<"GUALIKE!";
					break;
				case 8 ... 40:
					cout<<"LEGENDARY!";
					break;
			}
		}
		else if(a=="Die")
		{
			cd++;
			if(count>=3)
			{
				cout<<"SHUTDOWN."<<endl;
			}
			else
			{
				cout<<"You have been slained."<<endl;
			}
			count=0;
		}
		else
		{
			ch++;
		}
		cout<<endl;
	}
	cout<<ck<<"/"<<cd<<"/"<<ch<<endl;
	return 0;
}
