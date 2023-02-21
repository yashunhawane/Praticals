#include<iostream>
using namespace std;

class node
{
	private:
		int data;
		node *address;
		
	public:
		void add(int);
		void display(void);
		int count(void);
}*p;                    // created a pointer

// node *p;             Instead of writing like we've written on line 14 we can write like this

void node::add(int num)
{
	node *q=p;
	if(p==NULL)
	{
		p=new node;
		p-> data=num;
		p-> address=NULL;
	}
	else
	{
		while(q->address!=NULL)
		{
			q=q->address;
		}
		q->address=new node;
		q->address->data=num;
		q->address->address=NULL; 
	}
}

void node::display(void)
{
	node *q=p;
	if(p==NULL)
	{
		cout<<"No linked list"; 
	}
	else
	{
		while(q!=NULL)
		{
			cout<<q->data<<" ";
			q=q->address;
		}
	}
}

int node::count(void)
{
	node *q=p;
	int i=0;
	if(p==NULL)
	{
		return 0;
	}
	else
	{
		while(q!=NULL)
		{
			i++;
			q=q->address;
		}
		return i;
	}
}

int main(void)
{
	int num, option;
	node n;
	p=NULL;
	char ch='y';
	while(ch!='n')
	{
		cout<<"\n1.Add";
		cout<<"\n2.Display";
		cout<<"\n3.Count";
		cout<<"\n4.Exit";
		cout<<"\nEnter an option: ";
		cin>>option;
		switch(option)
		{
			case 1:
				{
					cout<<"\nEnter the value: ";
					cin>>num;
					n.add(num);
					break;
				}
				
			case 2:
				{
					n.display();
					break;
				}
				
			case 3:
				{
				num=n.count();
				cout<<num;
				break;
				}
			
			case 4:
				{
					ch='n';
					break;
				}
			default:
				{
					cout<<"Please choose options { 1 | 2 | 3 | 4 }";
					break;
				}
		}
	}
}	

