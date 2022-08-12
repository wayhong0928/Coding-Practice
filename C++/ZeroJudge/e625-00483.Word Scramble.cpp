#include<iostream>
#include<iostream>

using namespace std;

int main(void)
{
	string a;
	bool check;
	while(cin>>a)
	{
		check=false;
		for(int i=a.length()-1;i>=0;i--)
		{
			if(a[i]=='.')
			{
				check=true;
			}
			cout<<a[i];
		}
		cout<<" ";
		if(check)
		{
			cout<<endl;
		}
	}
	return 0;
}

