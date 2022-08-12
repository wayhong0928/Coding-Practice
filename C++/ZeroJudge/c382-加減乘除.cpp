#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	char n;
	while(cin>>a>>n>>b)
	{	
		switch(n)
		{
			case '+':
				cout<<a+b<<endl;
				break;
			case '-':
				cout<<a-b<<endl;
				break;
			case '*':
				cout<<a*b<<endl;
				break;
			case '/':
				cout<<a/b<<endl;
				break;
		}
	}	
	return 0;
 } 
