#include<iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	long long a;
	cin>>a;
	cout<<(a>=6&&a<12)*590+(a>=12&&a<18)*790+(a>=18&&a<60)*890+(a>59)*399<<endl;
	return 0;
}
