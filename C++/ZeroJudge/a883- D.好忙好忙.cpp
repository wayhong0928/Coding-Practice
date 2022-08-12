#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	bool t[24]={false};
	bool check=true;
	int n=3;
	while(n--)
	{
		cin>>a>>b; 
		for(int i=a;i<=b;i++)
		{
			if(t[i]==false)
			{
				t[i]=true;
			}
			else
			{
				check=false;
				break;
			}
		}
	}
	if(check==true)
	{
		cout<<"Happy"<<endl;
	}
	else
	{
		cout<<"QQ"<<endl;
	}
	return 0;
}
