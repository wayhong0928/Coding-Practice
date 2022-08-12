#include<iostream>

using namespace std;

class link
{
	public:
		int data;
		link *right;
		link *left;
};

void print (link *c)
{
	cout<<c->data<<endl;
	
	if(c->left==0 && c->right==0 )
	{
		return;
	}
	else if(c->left=0)
	{
		c=c->right;
		print(c);
	}
	else
	{
		c=c->left;
		print(c);
	}

}

int main(void)
{
	int n[]={0,5,4,6,3,7,2,8,1,9,10};
	link *c,*f;
	f=0;
	for(int i=0;i<10;i++)
	{
		c=new link;
		c->data=n[i+1];
		
		if(c->data>n[i-1])
		{
			c->right=f;
			f=c;
		}
		else
		{
			c->left=f;
			f=c;
		}
	}
	print(c);
	return 0;
}
