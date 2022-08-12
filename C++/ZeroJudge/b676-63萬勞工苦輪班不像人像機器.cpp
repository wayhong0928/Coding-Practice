#include<iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		switch(n%5)
		{
			case 0:
				cout<<"U";
				break;
			case 1:
				cout<<"G";
				break;
			case 2:
				cout<<"Y";
				break;
			case 3:
				cout<<"T";
				break;
			case 4:
				cout<<"I";
				break;
		}
		cout<<endl;
	}
	return 0;
}
