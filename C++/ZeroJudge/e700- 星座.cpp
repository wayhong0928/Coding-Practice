#include<iostream>

using namespace std;

void f(int mm,int dd)
{
	if((mm == 1 && dd >= 21) || (mm == 2 && dd <= 19))
		cout<<"¤ô²~®y"<< endl;
	else if((mm == 2 && dd >= 20) || (mm == 3 && dd <= 20))
		cout<<"Âù³½®y"<< endl;
	else if((mm == 3 && dd >= 21) || (mm == 4 && dd <= 20))
		cout<<"¨d¦Ï®y"<< endl;
	else if((mm == 4 && dd >= 21) || (mm == 5 && dd <= 21))
		cout<<"ª÷¤û®y"<< endl;
	else if((mm == 5 && dd >= 22) || (mm == 6 && dd <= 21))
		cout<<"Âù¤l®y"<< endl;
	else if((mm == 6 && dd >= 22) || (mm == 7 && dd <= 22))
		cout<<"¥¨ÃÉ®y"<< endl;
	else if((mm == 7 && dd >= 23) || (mm == 8 && dd <= 21))
		cout<<"·à¤l®y"<< endl;
	else if((mm == 8 && dd >= 22) || (mm == 9 && dd <= 23))
		cout<<"³B¤k®y"<< endl;
	else if((mm == 9 && dd >= 23) || (mm == 10 && dd <= 23))
		cout<<"¤Ñ¯¯®y"<< endl;
	else if((mm == 10 && dd >= 24) || (mm == 11 && dd <= 22))
		cout<<"¤ÑÃÈ®y"<< endl;
	else if((mm == 11 && dd >= 23) || (mm == 12 && dd <= 22))
		cout<<"®g¤â®y"<< endl;
	else
		cout<<"¼¯½~®y"<< endl;
}

int main(void)
{
	int mm,dd;
	char t;
	while(cin>>mm>>t>>dd)
	{
		f(mm,dd);
	}
	return 0;
}
