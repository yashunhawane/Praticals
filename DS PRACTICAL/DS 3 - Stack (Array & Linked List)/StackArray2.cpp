#include <iostream>
using namespace std;
int arr[100],
	top=-1,
	 maxi=100;
	void push(int val)
	{
		if(top>=maxi)
		{
		   cout<<"The given Stack is full"<<endl;
		}
		else
		{
			top++;
			arr[top]=val;
		}
	}
	void pop()
	{
		if(top<=-1)
		{
		   cout<<"Number element to remove array is empty"<<endl;
		}
		else
		{
		   cout<<"Element Popped "<< arr[top]<<endl;
		   top--;
		}
	}
	
	void display()
	{
		cout<<"\n \t \tStack value : \n";
		for(int i=top; i>=0; i--)
		{
		 cout<<"\t \t"<<arr[i]<<"\n ";
	    }
	    cout<<endl;
	}
	
	int main() 
	{
	   int ch, val;
	   cout<<"Stack using array "<<endl;
	   cout<<"Let us know which task do you wish to perform"<<endl;
	   cout<<"1) Push"<<endl;
	   cout<<"2) Pop"<<endl;
	   cout<<"3) Display elements present in the Stack"<<endl;
	   cout<<"4) Exit"<<endl;
	   do 
	   {
	   	cout<<"Enter your choice: "<<endl;
	              cin>>ch;
	             switch(ch)
		 {
	       case 1: 
		   {
	                    cout<<"Enter the value to be pushed:"<<endl;
	                    cin>>val;
	                   push(val);
	                    break;
	                  }
	       case 2: 
        {
	            pop();
	            break;
	        }
	         
	        case 3: 
	       {
	            display();
	            break;
	         }
	         case 4: 
	      {
	        cout<<"Thank you"<<endl;
	         cout<<"Program Exited"<<endl;
	         break;
	       }
	         default: 
      {
	          cout<<"Invalid Choice"<<endl;
	       }
	      }
	   }
while(ch!=4);
	   return 0;
	}

