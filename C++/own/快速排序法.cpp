#include<iostream>
#include<cstdlib>

using namespace std;

int cp(int a[],int front ,int end)
{
	int c;
	for(int i=front;i<end;i++)
	{
		if(a[i]<a[end])
		{
			front+=1;
			c=a[i];
			a[i]=a[front-1];
			a[front-1]=c;
		}
	}
	front+=1;
	c=a[end];
	a[end]=a[front-1];
	a[front-1]=c;
	return front-1;
}

void n(int a[],int front,int end)
{
	int p;
	if(end>front)
	{
		p=cp(a,front,end);
		n(a,front,p-1);
		n(a,p+1,end);
	}
}

int main(void)
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	n(a,0,t-1);
	for(int i=0;i<t;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
