#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	while(cin>>n)
	{
		int m[n]={0},max=0,min=10000;
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			if(m[i]>max)
			{
				max=m[i];
			}
			if(m[i]<min)
			{
				min=m[i];
			}
		}
		cout<<max<<" "<<min<<endl;
	}
	return 0;
}
