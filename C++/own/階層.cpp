#include<iostream>

using namespace std;

int past(int p){
	int a=1;
	for(int i =1;i<p+1;i++){
		a =a*i;
	}
	return a;
}
int main(void){
	int a,b;
	cin>>a>>b;
	cout<<past(a)<<endl;
	cout<<past(b);
	return 0;
}

