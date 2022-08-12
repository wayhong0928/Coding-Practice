#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,check;
	while(cin>>a>>b>>c)
	{
		check=0;
		for(int i=1;i<=c;i++)
		{
			if(i%a==0 || i%b ==0)
			{
				check+=i;
			}
		}
		check=(check%26)+64;
		cout<<(char)check<<endl;
	}
	return 0;
}

