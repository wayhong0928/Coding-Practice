#include<iostream>

using namespace std;

void f(int num[],int find,int left,int right)
{
	bool check=false;
	int mid;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(num[mid]==find)
		{
			check=true;
			break;
		}
		else if(num[mid]>find)
		{
			right=mid-1;
		}
		else if(num[mid]<find)
		{
			left=mid+1;
		}
	}
	if(check)
	{
		cout<<"find at number "<<mid+1;
	}
	else
	{
		cout<<"can not find.";
	}
}

int main(void)
{
	int num[100000];
	cout<<"輸入要搜尋的數字，介於1~100,000： ";
	int find;
	cin>>find;
	if(find>100000)
	{
		cout<<"too big";
	}
	else
	{
		for(int i=0;i<100000;i++)
		{
			num[i]=i+1;
		}
		f(num,find,0,99999);
	}
	return 0;
}
