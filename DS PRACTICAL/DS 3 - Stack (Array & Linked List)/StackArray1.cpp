#include<iostream>
using namespace std;
class stack
{
	int stk[10], top;
	public:
		
		stack()
		{
		 	top=-1;
		}
		 
		void pop()
		{
		 	cout<<"The pop element is: "<<stk[top]<<"\n \n \n";
		 	top--;
		}
		 
		void push()
		{
		 	top++;
		 	cout<<"Enter the value: ";
		 	cin>>stk[top];
		 	
		}
		 
		void stack_overflow()
		{
		 	if(top==9)
		 	{
		 		cout<<"The stack is full \nPush can not be performed \n \n";
			}
		 	else
		 		push();
		}
		 
		void stack_underflow()
		{
		 	if(top==-1)
		 	{
		 		cout<<"The stack is empty \nPop can not be performed \n \n";
			}
		 	else
		 		pop();
		}
		 
		void display()
		{
		 	cout<<"\n \t \tStack value : \n";
			for(int i=top;i>-1;i--)
				cout<<"\t \t "<<stk[i]<<"\n";	
		}
};

int main()
{
	stack s;
	int ch;
	do{
		cout<<"Stack using array implementation "<<endl;
		cout<<"\n1:Push \n2:Pop \n3:Display \n4:Exit \n\nEnter the operation you want to perform: ";
		cin>>ch;
		switch(ch)
		{
			case 1: s.stack_overflow();
					break;
			case 2: s.stack_underflow();
					break;
			case 3: s.display();
					break;
		}
	}while(ch!=4);

	return(0);
}


