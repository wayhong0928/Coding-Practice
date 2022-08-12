#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	long long int a,b;
	while(cin>>a>>b)
	{
		if(a>b)
		{
			swap(a,b);
		}
		cout<<b-a<<endl;
	}
	return 0;
}
