#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n;
	string a,max;
	cin>>n;
	while(n--)
	{
		max="";
		for(int j=0;j<3;j++)
		{
			cin>>a;
			if(a.length()>max.length())
			{
				max=a;
			}
			else if(a.length()==max.length() )
			{
				if(a>max)
				{
					max=a;
				}
			}
		}
		cout<<max<<endl;
	}	
	return 0;
}
