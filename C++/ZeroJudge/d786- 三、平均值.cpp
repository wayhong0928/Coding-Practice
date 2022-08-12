#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double t,n,m,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			sum+=m;
		}
		cout<<setprecision(2)<<fixed<<sum/n<<endl;
	}
	return 0;
}
