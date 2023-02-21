#include<iostream>
using namespace std;

class node          //Child class
{
	public:
		int data;
		node *next;
};

class queue         //Parent class
{
	node *front;
	node *rear;
	public:
		queue()
		{
			front = rear = NULL;
		}
		
		void enqueue(int num)
		{
			node *new_node = new node();
			new_node -> data = num;
			new_node -> next = NULL;
			if(rear==NULL)
			{
				front = rear = new_node;
			}
			else
			{
				rear -> next = new_node;
				rear = new_node;
			}
		}
		
		int dequeue()
		{
			node *temp;
			temp = front;
			if(front==NULL)
			{
				cout<<"Queue is empty";
				return 0;
			}
			
			int val = temp -> data;
			if(front == rear)
			{
				front = rear = NULL;
				delete temp;
			}
			else
			{
				front = temp -> next;
				delete temp;
			}
			return val;
		}
		
		void display()
		{
			node *temp;
			temp = front;
			while(temp!=NULL)
			{
				cout<< temp -> data;
				temp = temp -> next;
				cout<<"\n";
			}
		}
};

int main()
{
	queue q;
	char ch='y';
	int option, x;
	while(ch!='n')
	{
		cout << "Implementation of Simple Queue Using Linked List" << endl;
		cout<<"\n\n1.enqueue";
		cout<<"\n2.dequeue";
		cout<<"\n3.Exit";
		cout<<"\nEnter an option: ";
		cin>>option;
		switch(option)
		{
			case 1:
			{
				q.enqueue(10);
				q.enqueue(20);
				q.enqueue(30);
				q.enqueue(40);
				q.display();
				break;
			}
			
			case 2:
			{
				q.dequeue();
				q.display();
				break;
			}
			
			case 3:
			{
				ch='n';
				break;
			}
			
			default:
			{
		 		cout<<"Please choose option between 1-3!!";
				break;
			}
		}
	}	
}

