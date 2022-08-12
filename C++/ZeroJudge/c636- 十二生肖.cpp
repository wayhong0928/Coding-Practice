#include<iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		if(n<0) 
		{
			n*=-1;
			n%=12;
			n=13-n;
			n%=12;
		}
		else
		{
			n%=12;
		}
		switch(n)
		{
			case 1:
				cout<<"¹«";
				break;
			case 2:
				cout<<"¤û";
				break;
			case 3:
				cout<<"ªê";
				break;
			case 4:
				cout<<"¨ß";
				break;
			case 5:
				cout<<"Às";
				break;
			case 6:
				cout<<"³D";
				break;
			case 7:
				cout<<"°¨";
				break;
			case 8:
				cout<<"¦Ï";
				break;
			case 9:
				cout<<"µU";
				break;
			case 10:
				cout<<"Âû";
				break;
			case 11:
				cout<<"ª¯";
				break;		
			case 0:
				cout<<"½Þ";
				break;							
		}
		cout<<endl;
	}
	return 0;
}
