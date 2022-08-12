#include<iostream>

using namespace std;

int sum(int *a,int *b ){
	int c;
	c=*a+*b;
	*a+=1;
	*b+=1;
	return c;
}

void change(int *a, int *b){
	int t;
	*a=t;
	t=*b;
	*b=t;
}

int main(void){
	int a=0,b=0;
	cout<<"¿é¤Ja,b¡G ";
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	cout<<sum(&a,&b)<<endl;
	return 0;
}
 
