#include<iostream>

using namespace std;
 
int main(void)
{
	int k,count,k1;
	cin>>k;
	k1=k;
	count=1;
	if(k<0)
	{
		k *=-1; 
		for(int i=0;i<k;i++)
		{
			count+=2;
		}	
		count-=1;
	}
	else if(k>0)
	{
		for(int i=1;i<k;i++)
		{
			count+=2;
		}		
	}
	cout<<count<<endl;
	return 0;
}
