#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct node
{
	int value;
	struct node *next;
	struct node *prev;
};
struct node *head;
struct node *tail;
void init()
{
	head = NULL;
	tail = NULL;
}
void insertFirst(int element)
{
	struct node *newItem;
	newItem = new node;
	if (head == NULL)
	{
		head = newItem;
		newItem->prev = NULL;
		newItem->value = element;
		newItem->next = NULL;
		tail = newItem;
	}
	else
	{
		newItem->next = head;
		newItem->value = element;
		newItem->prev = NULL;
		head->prev = newItem;
		head = newItem;
	}
}
void insertLast(int element)
{
	struct node *newItem;
	newItem = new node;
	newItem->value = element;
	if (head == NULL)
	{
		head = newItem;
		newItem->prev = NULL;
		newItem->next = NULL;
		tail = newItem;
	}
	else
	{
		newItem->prev = tail;
		tail->next = newItem;
		newItem->next = NULL;
		tail = newItem;
	}
}
void insertAfter(int old, int element)
{
	struct node *newItem;
	newItem = new node;
	struct node *temp;
	temp = head;
	if (head == NULL)
	{
		return;
	}
	if (head == tail)
	{
		if (head->value != old)
		{
			return;
		}
		newItem->value = element;
		head->next = newItem;
		newItem->next = NULL;
		head->prev = NULL;
		newItem->prev = head;
		tail = newItem;
		return;
	}
	if (tail->value == element)
	{
		newItem->next = NULL;
		newItem->prev = tail;
		tail->next = newItem;
		tail = newItem;
		return;
	}
	while (temp->value != old)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			cout << "Could not insert" << endl;
			cout << "Element not found" << endl;
			return;
		}
	}
	newItem->next = temp->next;
	newItem->prev = temp;
	newItem->value = element;
	temp->next->prev = newItem;
	temp->next = newItem;
}
void deleteFirst()
{
	if (head == NULL)
	{
		return;
	}
	if (head == tail)
	{
		struct node *cur;
		cur = head;
		head = NULL;
		tail = NULL;
		delete cur;
		return;
	}
	else
	{
		struct node *cur;
		cur = head;
		head = head->next;
		head->prev = NULL;
		delete cur;
	}
}
void deleteLast()
{
	if (head == NULL)
		return;
	if (head == tail)
	{
		struct node *cur;
		cur = head;
		head = NULL;
		tail = NULL;
		delete cur;
		return;
	}
	else
	{
		struct node *cur;
		cur = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete cur;
	}
}
void deleteItem(int element)
{
	struct node *temp;
	temp = head;
	if (head == tail)
	{
		if (head->value != element)
		{
			cout << "Could not delete" << endl;
			return;
		}
		head = NULL;
		tail = NULL;
		delete temp;
		return;
	}
	if (head->value == element)
	{
		head = head->next;
		head->prev = NULL;
		delete temp;
		return;
	}
	else if (tail->value == element)
	{
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		return;
	}
	while (temp->value != element)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			cout << "Element not found" << endl;
			return;
		}
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	delete temp;
}
struct node *searchItem(int element)
{
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->value == element)
		{
			return temp;
			break;
		}
		temp = temp->next;
	}
	return NULL;
}
void printList()
{
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->value << "->";
		temp = temp->next;
	}
	puts("");
}
void printReverse()
{
	struct node *temp;
	temp = tail;
	while (temp != NULL)
	{
		cout << temp->value << "->";
		temp = temp->prev;
	}
	cout << endl;
}
void makereverse()
{
	struct node *prv = NULL;
	struct node *cur = head;
	struct node *nxt;
	while (cur != NULL)
	{
		nxt = cur->next;
		cur->next = prv;
		prv = cur;
		cur = nxt;
	}
	head = prv;
}
int countNodes()
{
	struct node *temp = head;
	int i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return i;
}
int dltfrst()
{
	if (head == NULL)
	{
		return 0;
	}
	int prev;
	prev = head->value;
	if (head == tail)
	{
		struct node *cur;
		cur = head;
		head = NULL;
		tail = NULL;
		delete cur;
		return prev;
	}
	else
	{
		struct node *cur;
		cur = head;
		head = head->next;
		head->prev = NULL;
		delete cur;
		return prev;
	}
}
int dltlast()
{
	if (head == NULL)
		return 0;
	int prev;
	prev = tail->value;
	if (head == tail)
	{
		struct node *cur;
		cur = head;
		head = NULL;
		tail = NULL;
		delete cur;
		return prev;
	}
	else
	{
		struct node *cur;
		cur = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete cur;
		return prev;
	}
}
int main()
{
	init();
	int choice;
	cout << "DOUBLY LINKED LIST Implementation" << endl;
	cout << "\n1.InsertFirst\n2.InsertLast\n3.InsertAfter\n4.DeleteFirst\n5.DeleteLast\n6.SearchItem\n7.PrintList\n8.ReversePrint\n9.DeleteItem\n10.Count\n11.Make reverse\n12.Exit\n"
		 << endl;
	do
	{
		cout << "\nEnter the Choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int elementStart;
			cout << "Enter data to append :- (start)";
			cin >> elementStart;
			insertFirst(elementStart);
			printList();
			cout << "\n-" << endl;
			break;
		}
		case 2:
		{
			int elementEnd;
			cout << "Enter data to append :- (end)";
			cin >> elementEnd;
			insertLast(elementEnd);
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 3:
		{
			int old, newitem;
			cout << "Enter data to be inserted: ";
			cout << "Enter Old Item_";
			cin >> old;
			cout << "Enter new Item_";
			cin >> newitem;
			insertAfter(old, newitem);
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 4:
		{
			deleteFirst();
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 5:
		{
			deleteLast();
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 6:
		{
			int item;
			cout << "Enter Item to Search";
			cin >> item;
			struct node *ans = searchItem(item);
			if (ans != NULL)
			{
				cout << "FOUND " << ans->value << endl;
			}
			else
			{
				cout << "NOT FOUND" << endl;
			}
			cout << "\n--" << endl;
			break;
		}
		case 7:
		{
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 8:
		{
			printReverse();
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 9:
		{
			int element;
			cout << "Enter element to delete " << endl;
			cin >> element;
			deleteItem(element);
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 10:
		{
			cout << countNodes() << endl;
			cout << "\n--" << endl;
			break;
		}
		case 11:
		{
			makereverse();
			printList();
			cout << "\n--" << endl;
			break;
		}
		case 12:
		{
			exit(1);
			break;
		}
		default:
			cout << "\n The Given Option is Invalid, Please Select options from (1/2/3/4/5/6/7/8/9/10/11/12)" << endl;
		}
	} while (choice != 12);
	return 0;
}

