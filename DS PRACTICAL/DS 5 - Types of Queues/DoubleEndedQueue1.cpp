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
		
		void addition_atrear(int num)
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
		
		int deletion_fromfront()
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
				cout<< temp -> data <<endl;
				temp = temp -> next;
			}
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
		cout << "Implementation of Double Ended Queue Using Linked List" << endl;
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
				q.addition_atrear(100);
				q.addition_atrear(200);
				q.addition_atrear(300);
				q.addition_atrear(400);
				q.display();
				break;
			}
			
			case 2:
			{
				q.deletion_fromfront();
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

