#include<iostream>

using namespace std;

int main(void)
{
	int n,sum;
	while(cin>>n)
	{
		sum=0;
		int day[n];
		for(int i=0;i<n;i++)
		{
			cin>>day[i];
			sum+=day[i]*(i+1);
		}	
		cout<<sum<<endl;
	}	
	return 0;
}
