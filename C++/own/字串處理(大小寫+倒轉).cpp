#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s;
	int l;
	cout<<"¿é¤J¦r¦ê¡G";
	getline(cin,s);
	cout<<"¦r¦ê­ËÂà+¤j¤p¼g¤¬´«¡G";
	l=s.length();
	for(int i=l;i>=0;i--){
		if (s[i]>='a' && s[i] <= 'z')
			s[i]-=32;
		else if	(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
	cout<<s[i];
	} 
	return 0;
}

