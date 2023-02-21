#include<iostream>
using namespace std;

class node                     //child class
{
	public:
		int data;
		node *link;            //self referential pointer (same as class name)
}; 

class stack                    //parent class
{
	node *top;
	int count;
	public:
		
		stack()
		{
			top=NULL;
			count=0;
		}
		
		void push(int);
		void pop();
		void display();
		void stacktop();
};

void stack::push (int data1)
{
	node *newnode = new node();
	newnode-> data=data1;
	newnode -> link=top;
	top=newnode;
	count=count+1;
}

void stack::display()
{
	node *temp;
	temp=top;
	int i=0;
	if(temp!=NULL)
	{
		while(temp!=NULL)
		{
			cout<<"\nElement "<<++i<<" is: "<<temp->data;
			temp=temp->link;
		}
	}
	else
	{
		cout<<"\nStack is empty...";
	}
}

void stack::stacktop()
{
	if(top!=NULL)
	{
		cout<<"\nData of top position is: "<<top->data;
		cout<<"\nTotal elements in stack are: "<<count;	
	}	
	else
	{
		cout<<"\nStack is empty...";
	}
}

void stack::pop()
{
	node *temp;
	temp=top;
	if(temp!=NULL)
	{
		top=temp->link;
		count=count-1;
		cout<<"\nThe data "<<temp->data<<" is deleted from the stack";
		delete temp;
	}
	else
	{
		cout<<"\nYou cannot perform pop operations as stack is empty.";
	}
}

int main()
{
	stack s;
	int ch, val;
	cout<<"Stack using Linked List implementation "<<endl;
	cout<<"\n1.Push";
	cout<<"\n2.Pop";
	cout<<"\n3.Display";
	cout<<"\n4.Exit";
	do
	{
		cout<<"\nEnter a choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter the value to be pushed: ";
				cin>>val;
				s.push(val);			
				break;
			}	
			
			case 2:
			{
				s.pop();
				break;
			}
			
			case 3:
			{
				s.display();
				break;
			}
			
			case 4:
			{
				cout<<"\nExit";
				break;
			}
			
			default:
			{
		 		cout<<"\nPlease enter valid choice!!";
			}
		}
	}
	while(ch!=4);
	return 0;
}


