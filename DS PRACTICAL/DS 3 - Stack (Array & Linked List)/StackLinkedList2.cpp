#include <bits/stdc++.h> 
using namespace std;
struct Node
{
int data;
struct Node* link;
};
struct Node* top;
void push(int data)
{
struct Node* temp; 
temp = new Node();
if (!temp)
{
cout << "\n Memory is full";
exit(1);
}
else
{
temp->data = data; 
temp->link = top; 
top = temp;
}
}
void pop()
{
struct Node* temp;
if (top == NULL)
{
cout << "\n Cannot pop because stack is empty'" << endl;
}
else
{
temp = top;
top = top->link;
temp->link = NULL; 
free(temp);
cout << "\nElement has been popped" << endl;
}
}
void display()
{
struct Node* temp;

if (top == NULL)
{
cout << "\nStack is empty";

exit(1);
}
else
{
temp = top;
cout << "Elements are \n"<<endl; 
while (temp != NULL)
{
cout << temp->data<<"\n"; 
temp = temp->link;
}
}
}
int main()
{
int choice,val;
cout<<"Stack using linked list implementation"<<endl;
cout<<"\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT"<<endl; 
do
{
cout<<"Enter  Choice:"<<endl; 
cin>>choice;
switch(choice)
{
case 1:
{
cout<<"Enter value to be pushed:"<<endl; 
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
cout<<"Thank you so much"<<endl;	
cout<<"Exit \n"<<endl; 
break;
}
}
}
while(choice!=4); 
return 0;
}

