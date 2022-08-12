#include<iostream>

using namespace std;

int main(void)
{
	int n;
	long long a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		switch (a) 
		{
			case 1:
				cout<<b+c<<endl;
				break;
			case 2:
				cout<<b-c<<endl;
				break;
			case 3:
				cout<<b*c<<endl;
				break;
			case 4:
				cout<<b/c<<endl;
				break;
		}
	}
	return 0;
}
