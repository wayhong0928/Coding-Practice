#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

int main(void){
	int a;
	char b[100];
	cout<<"輸入字串";
	cin.getline(b,100);
	a=strlen(b);
	cout<<"倒轉結果：";
	for(int i=a-1;i>=0;i--){
	cout<<b[i];
	}	
	cout<<endl<<"共有"<<a<<"字";
	return 0;
}
