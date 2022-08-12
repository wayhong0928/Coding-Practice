#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double n[8][5]={0},sumday=0,sumtime=0;
	int maxday=0,maxtime=0;
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>n[i][j];
			n[i][4]+=n[i][j]; //day
			n[7][j]+=n[i][j]; //time
			if(n[7][j]>sumtime)
			{
				sumtime=n[7][j];
				maxtime=j+1;
			}
		}
		if(n[i][4]>sumday) //daysum
		{
			sumday=n[i][4];
			maxday=i+1;
		}
	}
	cout<<maxday<<endl;
	switch(maxtime)
	{
		case 1:
			cout<<"morning";
			break;
		case 2:
			cout<<"afternoon";
			break;
		case 3:
			cout<<"night";
			break;
		case 4:
			cout<<"early morning";
			break;
	}
	cout<<endl;
	return 0;
}
