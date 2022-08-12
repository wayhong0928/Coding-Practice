#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string a,b[501];
	int c=0;
	while(getline(cin,a))
	{
		bool check=false;
		for(int i=0;i<c;i++)
		{
			if(a==b[i])
			{
				cout<<"YES"<<endl;
				check=true;
				break;
			}
		}
		if(check==false)
		{
			cout<<"NO"<<endl;
		}
		b[c]=a;
		c++;
	}
	return 0;
}
