#include<iostream>

using namespace std;

class link
{
	public:
		int data;
		link *next;
};

void print(link *c)
{
	while(c!=0)
	{
		cout<<c->data <<" ";
		c=c->next;
	}
}
void insert(link *c,int num)
{
	link *node=new link;
	while(c->data<num)
	{
		c=c->next;
	}
	node->next=c->next;
	c->next=node;
	node->data=num;
}

void clean(link *c)
{
	while(c->data!=0)
	{
		link *node=c;
		c=c->next;
		delete node;
		node=0;
	}
}

void del(link *c,int num)
{
	//bug
	while(c->data!=num)
	{
		c=c->next;
	}
	link *node=c;
	c=c->next->next;
	delete node;
	node=0;
}

int main(void)
{
	int n,num,m;
	
	link *c,*f;
	f=0;
	
	cout<<"輸入總共有幾個數字：";
	cin>>n;
	cout<<"輸入數字：";
	
	for(int i=0;i<n;i++)
	{
		cin>>num;
		c=new link;
		c->data=num;
		c->next=f;
		f=c;
	}
	print(c);
	
	cout<<"輸入要插入的數字：";
	cin>>m;
	insert(c,m);
	print(c);
	cout<<"刪除全部輸入1，否則輸入0：";
	cin>>m;
	if(m==1)
	{
		clean(c);
	}
	else
	{
		cout<<"輸入要刪除的數字：";
		cin>>m;
		del(c,m);
		print(c);
	}
	
	
	return 0;
}

