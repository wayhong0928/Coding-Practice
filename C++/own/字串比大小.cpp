#include<iostream>
#include<cstdlib> 
#include<cstring>

using namespace std;

int main(void){
	char a[]="abc";
	char b[]="AB";
	
	int x=strcmp(a,b);
	if (x==0)
		cout<<a<<"="<<b;
	else if(x<0)
		cout<<a<<"<"<<b;
	else if(x>0)
		cout<<a<<">"<<b;	
	
	return 0;
} 
