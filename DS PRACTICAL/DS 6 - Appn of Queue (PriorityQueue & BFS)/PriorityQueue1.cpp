#include<iostream>
using namespace std;

class node          //Child class
{
	public:
		int data;
		node *next;
		int priority;
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
		
		void enqueue(int num, int p)
		{
			node *temp, *priority;
			node *new_node = new node();
			new_node -> data = num;
			new_node -> priority = p;
			new_node -> next = NULL;
			temp = front;
			if(temp!=NULL)
			{
				if(temp->priority > p)
				{
					new_node->next=temp;
					front=new_node;
				}
				
				else if(rear->priority<p)
				{
					rear->next=new_node;
					rear=new_node;
				}
				
				else
				{
					while(temp!=NULL)
					{
						if(temp->priority>p)
						break;
						priority=temp;
						temp=temp->next;
					}
					new_node -> next = priority->next;
					priority->next = new_node;
				}
			}
			else
			{
				rear=front=new_node;
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
			cout<<"\n\n  Queue:  ";
			while(temp!=NULL)
			{
				cout<< temp -> data<<" ->  ";
				temp = temp -> next;
			}
			cout<<"NULL";
		}
		
		void addition_atfront(int num)
		{
			node *new_node = new node();
			new_node -> data = num;
			new_node -> next = front;
			front = new_node;
		}
		
		int deletion_fromrear()
		{
			int n;
			node *ptr,*temp;
			temp=front;
			if(front==NULL)
			{
				cout<<"Queue is empty";
				return 0;
			}
			if(front==rear)
			{
				n=front->data;
				delete front;
				front=rear=NULL;				
			}
			else 
    		{
		        while (temp->next!=rear)
				{
					temp=temp->next;
				}
				ptr=rear;
				n=ptr->data;
				rear=temp;
				temp->next=NULL;
				delete(ptr);				        
			}
			return n;
		}		
};

int main()
{
	queue q;
	char ch='y';
	int option, x;
	while(ch!='n')
	{
		cout<<"Implementation of Priority Queue \n"<<endl;
		cout<<"\n\n1.Addition of elements from rear";
		cout<<"\n2.Deletion of elements from front";
		cout<<"\n3.Adddition of elements at front";
		cout<<"\n4.Deletion of elements from rear";
		cout<<"\n5.Exit";
		cout<<"\nEnter an option: ";
		cin>>option;
		switch(option)
		{
			case 1:
			{
				q.enqueue(10,3);
				q.enqueue(20,2);
				q.enqueue(30,1);
				q.enqueue(40,4);
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
				q.addition_atfront(11);
				q.addition_atfront(12);
				q.display();
				break;
			}
			
			case 4:
			{
				q.deletion_fromrear();
				q.display();
				break;
			}
			
			case 5:
			{
				ch='n';
				break;
			}
			
			default:
			{
		 		cout<<"Please choose option between 1-5!!";
				break;
			}
		}
	}	
}



