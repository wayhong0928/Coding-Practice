#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	cout.tie(0);
	int a[4][5]={0};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];
			a[i][4]+=a[i][j];
		}
	}
	cout<<a[0][4]<<":"<<a[1][4]<<endl;
	cout<<a[2][4]<<":"<<a[3][4]<<endl;
	if(a[0][4]>a[1][4] && a[2][4]>a[3][4])
	{
		cout<<"Win"<<endl;
	}
	else if(a[0][4]<a[1][4] && a[2][4]<a[3][4])
	{
		cout<<"Lose"<<endl;
	}
	else
	{
		cout<<"Tie"<<endl;
	}
	return 0;
}
