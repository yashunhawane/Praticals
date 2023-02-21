#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct Node
{
	int data;
	Node *next;
};
class LinkedList
{
private:
	Node *head;

public:
	LinkedList()
	{
		head = NULL;
	}
	void InsertAtHead(int newElement)
	{
		Node *newNode = new Node();
		newNode->data = newElement;
		newNode->next = NULL;
		if (head == NULL)
		{
			head = newNode;
			newNode->next = head;
		}
		else
		{
			Node *temp = head;
			while (temp->next != head)
				temp = temp->next;
			temp->next = newNode;
			newNode->next = head;
			head = newNode;
		}
	}
	void InsertAtEnd(int newElement)
	{
		Node *newNode = new Node();
		newNode->data = newElement;
		newNode->next = NULL;
		if (head == NULL)
		{
			head = newNode;
			newNode->next = head;
		}
		else
		{
			Node *temp = head;
			while (temp->next != head)
				temp = temp->next;
			temp->next = newNode;
			newNode->next = head;
		}
	}
	void InsertAtPosition(int newElement, int position)
	{
		Node *newNode = new Node();
		newNode->data = newElement;
		newNode->next = NULL;
		Node *temp = head;
		int NoOfElements = 0;
		if (temp != NULL)
		{
			NoOfElements++;
			temp = temp->next;
		}
		while (temp != head)
		{
			NoOfElements++;
			temp = temp->next;
		}
		if (position < 1 || position > (NoOfElements + 1))
		{
			cout << "\nInavalid position." << endl;
		}
		else if (position == 1)
		{
			if (head == NULL)
			{
				head = newNode;
				head->next = head;
			}
			else
			{
				while (temp->next != head)
				{
					temp = temp->next;
				}
				newNode->next = head;
				head = newNode;
				temp->next = head;
			}
		}
		else
		{
			temp = head;
			for (int i = 1; i < position - 1; i++)
				temp = temp->next;
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
	void display()
	{
		Node *temp = head;
		if (temp != NULL)
		{
			cout << "The list contains: ";
			while (true)
			{
				cout << temp->data << " ";
				temp = temp->next;
				if (temp == head)
					break;
			}
			cout << endl;
		}
		else
		{
			cout << "The list is empty.\n";
		}
	}
	void deleteFirst()
	{
		if (head != NULL)
		{
			if (head->next == head)
			{
				head = NULL;
			}
			else
			{
				Node *temp = head;
				Node *firstNode = head;
				while (temp->next != head)
				{
					temp = temp->next;
				}
				head = head->next;
				temp->next = head;
				(firstNode);
			}
		}
	}
	void deleteEnd()
	{
		if (head != NULL)
		{
			if (head->next == head)
			{
				head = NULL;
			}
			else
			{
				Node *temp = head;
				while (temp->next->next != head)
					temp = temp->next;
				Node *lastNode = temp->next;
				temp->next = head;
				free(lastNode);
			}
		}
	}
	void DeleteAtPosition(int position)
	{
		Node *nodeToDelete = head;
		Node *temp = head;
		int NoOfElements = 0;
		if (temp != NULL)
		{
			NoOfElements++;
			temp = temp->next;
		}
		while (temp != head)
		{
			NoOfElements++;
			temp = temp->next;
		}
		if (position < 1 || position > NoOfElements)
		{
			cout << "\nInvalid position.";
		}
		else if (position == 1)
		{
			if (head->next == head)
			{
				head = NULL;
			}
			else
			{
				while (temp->next != head)
					temp = temp->next;
				head = head->next;
				temp->next = head;
				free(nodeToDelete);
			}
		}
		else
		{
			temp = head;
			for (int i = 1; i < position - 1; i++)
				temp = temp->next;
			nodeToDelete = temp->next;
			temp->next = temp->next->next;
			free(nodeToDelete);
		}
	}
	int countNodes()
	{
		Node *temp = head;
		int i = 0;
		if (temp != NULL)
		{
			i++;
			temp = temp->next;
		}
		while (temp != head)
		{
			i++;
			temp = temp->next;
		}
		return i;
	}
	void SearchElement(int searchValue)
	{
		Node *temp = head;
		int found = 0;
		int i = 0;
		if (temp != NULL)
		{
			while (true)
			{
				i++;
				if (temp->data == searchValue)
				{
					found++;
					break;
				}
				temp = temp->next;
				if (temp == head)
				{
					break;
				}
			}
			if (found == 1)
			{
				cout << searchValue << " is found at index = " << i << ".\n";
			}
			else
			{
				cout << searchValue << " is not found in the list.\n";
			}
		}
		else
		{
			cout << "The list is empty.\n";
		}
	}
	void reverseList()
	{
		if (head != NULL)
		{
			Node *prevNode = head;
			Node *tempNode = head;
			Node *curNode = head->next;
			prevNode->next = prevNode;
			while (curNode != head)
			{
				tempNode = curNode->next;
				curNode->next = prevNode;
				head->next = curNode;
				prevNode = curNode;
				curNode = tempNode;
			}
			head = prevNode;
		}
	}
};
int main()
{
	int choice, data, location;
	LinkedList cll;
	cout << "CIRCULAR LINKED LIST Implementation" << endl;
	cout << "\n1.InsertFront\n2.InsertEnd\n3.InsertAtPosition\n4.Delete First\n5.Delete End\n6.DeleteAtPosition\n7.Count\n8.Search\n9.Reverse\n10.Display\n11.Exit\n"
		 << endl;
	do
	{
		cout << "\nEnter the Choice: \n"
			 << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter data to append :- (start)";
			cin >> data;
			cll.InsertAtHead(data);
			cll.display();
			cout << "\n--" << endl;
			break;
		case 2:
			cout << "Enter data to append :- (end)";
			cin >> data;
			cll.InsertAtEnd(data);
			cll.display();
			cout << "\n--" << endl;
			break;
		case 3:
			cout << "Enter data to be inserted: ";
			cin >> data;
			cout << "Enter location to be inserted into: ";
			cin >> location;
			cll.InsertAtPosition(data, location);
			cll.display();
			cout << "\n--" << endl;
			break;
		case 4:
			cll.deleteFirst();
			cll.display();
			cout << "\n--" << endl;
			break;
		case 5:
			cll.deleteEnd();
			cll.display();
			cout << "\n--" << endl;
			break;
		case 6:
			cout << "Enter location to be inserted into: ";
			cin >> location;
			cll.DeleteAtPosition(location);
			cll.display();
			cout << "\n--" << endl;
			break;
		case 7:
			cout << cll.countNodes() << endl;
			cout << "\n--" << endl;
			break;
		case 8:
			cout << "Enter data to Search :- ";
			cin >> data;
			cll.SearchElement(data);
			cout << "\n--" << endl;
			break;
		case 9:
			cll.reverseList();
			cll.display();
			cout << "\n---" << endl;
			break;
		case 10:
			cll.display();
			cout << "\n--" << endl;
			break;
		case 11:
			exit(1);
			break;
		default:
			cout << "\nSelect Proper Option (1/2/3/4/5/6/7/8/9/10/11)" << endl;
		}
	} while (choice != 11);
	return 0;
}

