#include<iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int b[3]={0};
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]%3]++;
	}
	cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
	return 0;
}
