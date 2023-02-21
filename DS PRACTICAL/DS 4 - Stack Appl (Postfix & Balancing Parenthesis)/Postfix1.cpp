#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *link;
};

class stack
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
		void display();
		void pop_add();
		void pop_sub();
		void pop_multi();
		void pop_div();		
};

void stack::push(int data1)
{
	node *newnode = new node();
	newnode -> data=data1;
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
		while (temp!=NULL)
		{
			cout<<"\nResult is: "<<temp->data;
			temp=temp->link;
		}
	}
	else
	{
		cout<<"\nStack is empty!!";
	}
}

void stack::pop_add()
{
	int val;
	node *temp;
	temp = top;
	top = temp->link;
	val = temp->data;
	delete temp;
	top -> data+= val; 
}

void stack::pop_sub()
{
	int val;
	node *temp;
	temp = top;
	top = temp->link;
	val = temp->data;
	delete temp;
	top -> data-=val;
}

void stack::pop_multi()
{
	int val;
	node *temp;
	temp = top;
	top = temp->link;
	val = temp->data;
	delete temp;
	top -> data*=val;
}

void stack::pop_div()
{
	int val;
	node *temp;
	temp = top;
	top = temp->link;
	val = temp->data;
	delete temp;
	top -> data/=val;
}

int main()
{
	stack s;
	char exp[20];
	int i, data;
	cout<<"Stack Application Post-Fix Evalutation"<<endl;
	cout<<"\nEnter the expression: "; //Enter 569*7/3, 2 3 1 * + 9 -
	cin>>exp;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
		{
			if (exp[i]=='+')
			{
				s.pop_add();
			}
			else if(exp[i]=='-')
			{
				s.pop_sub();
			}
			else if(exp[i]=='*')
			{
				s.pop_multi();
			}
			else
			{
				s.pop_div();
			}
		}
		else
		{
			data = int(exp[i])-48;               // 0 - Character datatype has integer value - 48
			s.push(data);
		}
	}
	s.display();
	return (0);
}

