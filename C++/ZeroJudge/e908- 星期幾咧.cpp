#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	long long n;
	int b,check;
	while(cin>>a>>n)
    {
		if(a=="Monday")
		{
			b=1;
		}
		else if(a=="Tuesday")
		{
			b=2;
		}
		else if(a=="Wednesday")
		{
			b=3;
		}
		else if(a=="Thursday")
		{
			b=4;
		}
		else if(a=="Friday")
		{
			b=5;
		}
		else if(a=="Saturday")
		{
			b=6;
		}
		else if(a=="Sunday")
		{
			b=0;
		}
		while(n>7)
		{
			n=n-7;
		}
		check=(n+b)%7;
		switch(check)
		{
			case 1:
				cout<<"Monday"<<endl;
				break;
			case 2:
				cout<<"Tuesday"<<endl;
				break;
			case 3:
				cout<<"Wednesday"<<endl;
				break;
			case 4:
				cout<<"Thursday"<<endl;
				break;
			case 5:
				cout<<"Friday"<<endl;
				break;
			case 6:
				cout<<"Saturday"<<endl;
				break;
			case 0:
				cout<<"Sunday"<<endl;
				break;		
		}
	}
	return 0;
}
