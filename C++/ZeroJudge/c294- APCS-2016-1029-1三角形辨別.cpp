#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a[3]={0}; 
	while(cin>>a[0]>>a[1]>>a[2])
	{
		sort(a,a+3);
		if(a[0]+a[1]<=a[2])
		{
			cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl<<"No"<<endl;
		}
		else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
		{
			cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl<<"Obtuse"<<endl;
		}
		else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
		{
			cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl<<"Right"<<endl;
		}
		else
		{
			cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl<<"Acute"<<endl;
		}
	}
	return 0;
}
