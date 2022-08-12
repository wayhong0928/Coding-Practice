#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a;
	while(cin>>a) 
	{
		for(int i=0;i<a.length() ;i++)
		{
			switch (a[i])
			{
				case 'T':
					cout<<'A';
					break;
				case 'A':
					cout<<'U';
					break;
				case 'G':
					cout<<'C';
					break;
				case 'C':
					cout<<'G';
					break;
			}
		}
		cout<<endl;
	}	
	return 0;
}
