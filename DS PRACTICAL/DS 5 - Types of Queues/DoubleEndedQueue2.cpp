#include <iostream>

using namespace std;
class Node {
   public: int data;
   Node * next;
   Node * prev;
   Node(int d) {
      data = d;
      next = NULL;
      prev = NULL;
   }
};
Node * newNode(int x) {
   Node * node = new Node(x);
   return node;
}
Node * front = NULL;
Node * rear = NULL;
int Size = 0;
void insertFront(int x) {
   Node * node = newNode(x);
   if (front == NULL) {
      front = rear = node;
   } else {
      node -> next = front;
      front -> prev = node;
      front = node;
   }
   Size++;
}
void insertEnd(int x) {
   Node * node = newNode(x);
   if (rear == NULL) {
      front = rear = node;
   } else {
      node -> prev = rear;
      rear -> next = node;
      rear = node;
   }
   Size++;
}
void deleteFront() {
   if (front == NULL) {
      cout << "\nQueue is empty\n" << endl;
      return;
   }
   if (front == rear) {
      front = rear = NULL;
   } else {
      Node * temp = front;
      front = front -> next;
      front -> prev = NULL;
      delete(temp);
   }
   Size--;
}
void deleteEnd() {
   if (rear == NULL) {
      cout << "\nQueue is empty\n" << endl;
      return;
   }
   if (front == rear) {
      front = rear = NULL;
   } else {
      Node * temp = rear;
      rear = rear -> prev;
      rear -> next = NULL;
      delete(temp);
   }
   Size--;
}
int getFront() {
   if (front != NULL) {
      return front -> data;
   }
   return -1;
}
int getEnd() {
   if (rear != NULL) {
      return rear -> data;
   }
   return -1;
}
int size() {
   return Size;
}
bool isEmpty() {
   if (front == NULL) {
      return true;
   }
   return false;
}
void erase() {
   rear = NULL;
   while (front != NULL) {
      Node * temp = front;
      front -> prev = NULL;
      front = front -> next;
      delete(temp);
   }
   Size = 0;
}
void display() {
   Node * temp = front;
   if (front == NULL) {
      cout << "\nQueue is empty\n" << endl;
   } else {
      cout << "\nQueue is: \n";
      while (temp != NULL) {
         cout << temp -> data << " ";
         temp = temp -> next;
      }
      cout << endl;
   }
}
int main() {
   int choice;
   int val;
   int n;
  cout << "Implementation of Double Ended Queue Using Linked List" << endl;
   cout <<"\n\n1.InsertFront\n2.InsertEnd\n3.DeleteFront\n4.DeleteEnd\n5.GetFront\n6.GetEnd\n7.IsEmpty \n8.SizeOfQueue \n9.Erase \n10.Display \n11.Exit ";
   do {
      cout << "\nEnter the Choice:" << endl;
      cin >> choice;
      switch (choice) {
      case 1:
         cout << "\nEnter the element to be inserted at Front: ";
         cin >> n;
         insertFront(n);
         break;
      case 2:
         cout << "\nEnter the element to be inserted at End : ";
         cin >> n;
         insertEnd(n);
         break;
      case 3:
         cout << "\nDelete at Front ";
         deleteFront();
         break;
      case 4:
         cout << "\nDelete at End ";
         deleteEnd();
         break;
      case 5:
         n = getFront();
         if (n == -1) {
            cout << "\nQueue is empty\n" << endl;
         } else {
            cout << "\nFront element is : " << getFront() <<"\n";
         }
         break;
      case 6:
         n = getFront();
         if (n == -1) {
            cout << "\nQueue is empty\n" << endl;
         } else {
            cout << "\nEnd element is : " << getEnd() <<"\n";
         }
         break;
      case 7:
         if (isEmpty()) {
            cout << "\nQueue is empty\n";
         } else {
            cout << "\nQueue is not empty\n";
         }
         break;
      case 8:
         cout << "\nSize of Queue is: " << size() <<"\n";
         break;
      case 9:
         erase();
         break;
      case 10:
         display();
         break;
      case 11:
         exit(0);
         break;
      default:
         cout << "\nSelect Proper Option" << endl;
      }
   }
   while (choice != 11);
   return 0;
}

