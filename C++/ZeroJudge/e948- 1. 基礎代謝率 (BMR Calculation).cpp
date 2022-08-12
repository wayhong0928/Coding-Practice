#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	int n,sex,age,high,kg;
	double ans;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>sex>>age>>high>>kg;
			if(sex==1)
			{
				cout<<setprecision(2)<<fixed<<(13.7*kg)+(5*high-6.8*age)+66;
			}
			else
			{
				cout<<setprecision(2)<<fixed<<9.6*kg+(1.8*high-4.7*age)+655;
			}
			cout<<endl;
		}
	}
	return 0;
}
