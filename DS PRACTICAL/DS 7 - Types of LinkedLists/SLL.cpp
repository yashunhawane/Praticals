#include <iostream>

using namespace std;
class node
{
public:
   int data;
   node *next;
   node(int val)
   {
      data = val;
      next = NULL;
   }
};
int nodeCount = 0;
void insertStart(node *&head, int val)
{
   nodeCount += 1;
   node *n = new node(val);
   n->next = head;
   head = n;
}
void insertEnd(node *&head, int val)
{
   node *n = new node(val);
   node *temp = head;
   nodeCount += 1;
   if (head == NULL)
   {
      head = n;
      return;
   }
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = n;
   return;
}
void insertInBetween(node *&head, int data, int n)
{
   node *temp1 = new node(data);
   temp1->next = NULL;
   if (n == 1)
   {
      nodeCount += 1;
      temp1->next = head;
      head = temp1;
      return;
   }
   node *temp2 = head;
   for (int i = 0; i < n - 2; i++)
   {
      temp2 = temp2->next;
   }
   nodeCount += 1;
   temp1->next = temp2->next;
   temp2->next = temp1;
}
void search(node *head, int data)
{
   node *curr = head;
   while (curr != NULL)
   {
      if (curr->data == data)
      {
         cout << "Found in List\n";
         return;
      }

      curr = curr->next;
   }
   cout << "Not Found\n";
}
void deleteNode(node **head, int key)
{
   node *temp = *head;
   node *prev = NULL;
   nodeCount -= 1;
   if (temp != NULL && temp->data == key)
   {
      *head = temp->next;
      delete temp;
      return;
   }
   else
   {
      while (temp != NULL && temp->data != key)
      {
         prev = temp;
         temp = temp->next;
      }
      if (temp == NULL)
      {
         return;
      }
      prev->next = temp->next;
      delete temp;
   }
}
void deleteFront(node *&head)
{
   if (head == NULL)
   {
      cout << "Underflow" << endl;
      return;
   }
   else
   {
      nodeCount -= 1;
      node *temp = head;
      head = head->next;
      delete temp;
      return;
   }
}
void deleteEnd(node *&head)
{
   if (head == NULL)
   {
      cout << "UnderFlow" << endl;
      return;
   }
   else if (head->next == NULL)
   {
      nodeCount -= 1;
      delete head;
      return;
   }
   else
   {
      node *temp = head;
      nodeCount -= 1;
      while (temp->next->next != NULL)
         temp = temp->next;
      delete (temp->next);
      temp->next = NULL;
      return;
   }
}
void reverseList(node **head)
{
   node *prev = NULL;
   node *curr = *head;
   node *next = NULL;
   while (curr != NULL)
   {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
   }
   *head = prev;
}
void display(node *head)
{
   if (head == NULL)
   {
      cout << "EMPTY LINKED LIST" << endl;
   }
   while (head != NULL)
   {
      cout << head->data << " -> ";
      head = head->next;
   }
   cout << "\n";
}
int main()
{
   node *head = NULL;
   int choice, data;
   cout << "SINGLY LINKED LIST Implementation\n"
        << endl;
   cout << "\n1.InsertFront\n2.InsertEnd\n3.Display\n4.Search\n5.Reverse\n6.DeleteFront\n7.DeleteEnd \n8.Delete(by providing data) \n9.Count \n10.Insert in between \n11.Exit " << endl;
   do
   {
      cout << "\nEnter your Choice: \n"
           << endl;
      cin >> choice;
      switch (choice)
      {
      case 1:
         cout << "Enter data to append  (start): ";
         cin >> data;
         insertStart(head, data);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 2:
         cout << "Enter data to append (end): ";
         cin >> data;
         insertEnd(head, data);
         break;
      case 3:
         display(head);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 4:
         cout << "Enter data to Search : ";
         cin >> data;
         search(head, data);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 5:
         reverseList(&head);
         display(head);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 6:
         deleteFront(head);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 7:
         deleteEnd(head);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 8:
         cout << "Enter data to Delete :- ";
         cin >> data;
         deleteNode(&head, data);
         cout << "\n----------------------------------------------" << endl;
      case 9:
         cout << nodeCount << "\n";
         cout << "\n----------------------------------------------" << endl;
         break;
      case 10:
         int data, pos;
         cout << "Enter data : ";
         cin >> data;
         cout << "Enter position : ";
         cin >> pos;
         insertInBetween(head, data, pos);
         cout << "\n----------------------------------------------" << endl;
         break;
      case 11:
         exit(0);
         break;
      default:
         cout << "\n The Given Input is invalid, Please enter a Valid Choice (1/2/3/4/5/6/7/8/9/10/11)" << endl;
      }
   } while (choice != 11);
   return 0;
}

