#include<iostream>

using namespace std;

void t1(int n)
{
	/*
	
	*--
	**-
	***
 
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void t2(int n)
{
	/*
	
	--*
	-**
	***
	  
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<i+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void t3(int n)
{
	/*
	
	***
	**-
	*--
	  
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
}

void t4(int n)
{
	
	/*
	
	***
	-**
	--*
	
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int k=n-i;k>0;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}

void t5(int n)
{
	
	/*
	
	--*-- 
	-***- 
	*****
	
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<" ";	
		}	
		for(int k=0;k<2*i+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void t6(int n)
{
	
	/*
	
	--*-- 
	-*-*- 
	*****
	 
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<=2*i;k++)
		{
			if(i==0 || i==n-1)
			{
				cout<<"*";
			}
			else
			{
				if(k==0||k==2*i)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cout<<"input a number¡G";
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			int m;
			cout<<"input 1 ~ 6¡G ";
			cin>>m;
			cout<<endl;
			switch (m)
			{
				case 1:
					t1(n);
					break;
				case 2:
					t2(n);
					break;
				case 3:
					t3(n);
					break;
				case 4:
					t4(n);
					break;
				case 5:
					t5(n);
					break;
				case 6:
					t6(n);
					break;
			} 
			cout<<"\ninput a number , exit = 0 ¡G ";	
		}
	}
	return 0;
} 
