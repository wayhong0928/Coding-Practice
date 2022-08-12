#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string a;
	int b, sum=0;
	while(cin>>a)
	{
		sum=0;
		for(int i=0;i<a.length();i++)
		{ 
			b=int(a[i])-48;
			sum+=b;
		}
		if(sum %3 ==0)
		{
			cout<<"yes"<<endl;
		}
		else if(sum %3 != 0)
		{
			cout<<"no"<<endl;
		}	
	}
	return 0; 
} 
