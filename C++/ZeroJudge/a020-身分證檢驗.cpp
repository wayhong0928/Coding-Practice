#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string in;
	int out[11]={0},sum;
	while(cin>>in)
	{
		sum=0;
		switch (in[0])
		{
			case 'A':
				out[0]=1;
				out[1]=0;
				break;
			case 'B':
				out[0]=1;
				out[1]=1;
				break;
			case 'C':
				out[0]=1;
				out[1]=2;
				break;
			case 'D':
				out[0]=1;
				out[1]=3;
				break;
			case 'E':
				out[0]=1;
				out[1]=4;
				break;
			case 'F':
				out[0]=1;
				out[1]=5;
				break;
			case 'G':
				out[0]=1;
				out[1]=6;
				break;
			case 'H':
				out[0]=1;
				out[1]=7;
				break;
			case 'I':
				out[0]=3;
				out[1]=4;
				break;
			case 'J':
				out[0]=1;
				out[1]=8;
				break;
			case 'K':
				out[0]=1;
				out[1]=9;
				break;
			case 'L':
				out[0]=2;
				out[1]=0;
				break;
			case'M':
				out[0]=2;
				out[1]=1;
				break;
			case 'N':
				out[0]=2;
				out[1]=2;
				break;
			case 'O':
				out[0]=3;
				out[1]=5;
				break;
			case 'P':
				out[0]=2;
				out[1]=3;
				break;
			case 'Q':
				out[0]=2;
				out[1]=4;
				break;
			case 'R':
				out[0]=2;
				out[1]=5;
				break;
			case 'S':
				out[0]=2;
				out[1]=6;
				break;
			case 'T':
				out[0]=2;
				out[1]=7;
				break;
			case 'U':
				out[0]=2;
				out[1]=8;
				break;
			case 'V':
				out[0]=2;
				out[1]=9;
				break; 
			case 'W':
				out[0]=3;
				out[1]=2;
				break;
			case 'X':
				out[0]=3;
				out[1]=0;
				break;
			case 'Y':
				out[0]=3;
				out[1]=1;
				break;
			case 'Z':
				out[0]=3;
				out[1]=3;
				break;
		}
		for(int i=1;i<10;i++)	
		{
			out[i+1]=0;
			out[i+1]=in[i]-48;
		}
		sum=out[0]+out[10];		
		for(int i=1;i<10;i++)	
		{
			sum+=(out[i]*(10-i));
		}	
		if(sum%10==0)
		{
			cout<<"real"<<endl;
		}
		else
		{
			cout<<"fake"<<endl;
		}
	}
	return 0;
 } 
