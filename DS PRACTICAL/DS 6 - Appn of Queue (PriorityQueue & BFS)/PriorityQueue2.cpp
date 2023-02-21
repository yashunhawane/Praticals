#include <iostream>
using namespace std;
struct Node
{
    int data;
    int priority;
    struct Node *next;
};
Node *front = NULL;
Node *rear = NULL;
int Size = 0;
void insert(int val, int pr)
{
    Node *q;
    Node *temp = new Node;
    temp->data = val;
    temp->priority = pr;
    if (front == NULL || pr < front->priority)
    {
        temp->next = front;
        front = temp;
    }
    else
    {
        q = front;
        while (q->next != NULL && q->next->priority <= pr)
        {
          q = q->next;
        }
        temp->next = q->next;
        q->next = temp;
    }
    Size++;
}
void del()
{
    Node *temp;
    if (front == NULL)
    {
        cout << "Priority Queue is empty\n" << endl;
    }
    else
    {
        temp = front;
        cout << "Element deleted from priority queue is: " << temp->data << endl;
        front = front->next;
        delete temp;
        Size--;
    }
}
void display()
{
    Node *ptr;
    ptr = front;
    if (front == NULL)
    {
        cout << "Priority Queue is empty\n" << endl;
    }
    else{
        cout << "Priority Queue is: \n";
        cout << "Priority       Item\n";
        while (ptr != NULL)
        {
            cout << ptr->priority << "\t" << ptr->data << "\n";
            ptr = ptr->next;
        }
    }
}
int main()
{
 int choice, n, pr;
    int val;
    cout<<"Implementation of Priority Queue \n"<<endl;
   
      cout<<"1) Insert element to queue."<<endl;
	  cout<<"2) Delete element from queue."<<endl;
   	  cout<<"3) Display all the elements of queue."<<endl;
      cout<<"4) Exit.\n"<<endl;
    do
    {
        cout<<"Enter the Choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout << "Enter your value: ";
            cin >> n;
            cout << "Enter your priority: ";
            cin >> pr;
            insert(n, pr);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
             cout<<"Invalid Input!, Please Enter a Valid Choice(1/2/3/4) \n"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}

