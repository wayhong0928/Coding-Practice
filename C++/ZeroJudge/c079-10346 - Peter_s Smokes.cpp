#include<iostream>

using namespace std;

int run(int n,int k,int count)
{
	int check;
	if(n<k)
	{
		return count;
	}
	else
	{
		check=n/k;
		n=n%k;
		n=n+check;
		count+=check;
		return run(n,k,count);
	}
}

int main(void)
{
	int n,k;
	while(cin>>n>>k)
	{
		cout<<run(n,k,n)<<endl;
	}
	return 0;
}
