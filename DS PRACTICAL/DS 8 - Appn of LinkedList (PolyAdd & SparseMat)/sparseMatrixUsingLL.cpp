#include<iostream>
using namespace std;

class Node
{
	public:
	int row;
	int col;
	int data;
	Node *next;
};

void create_new_node(Node **p, int row_index,
					int col_index, int x)
{
	Node *temp = *p;
	Node *r;

	if (temp == NULL)
	{
		temp = new Node();
		temp->row = row_index;
		temp->col = col_index;
		temp->data = x;
		temp->next = NULL;
		*p = temp;
	}

	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		r = new Node();
		r->row = row_index;
		r->col = col_index;
		r->data = x;
		r->next = NULL;
		temp->next = r;
	}
}

void printList(Node *start)
{
	Node *ptr = start;
	cout << "row_position:";
	while (ptr != NULL)
	{
		cout << ptr->row << " ";
		ptr = ptr->next;
	}
	cout << endl;
	cout << "column_position:";

	ptr = start;
	while (ptr != NULL)
	{
		cout << ptr->col << " ";
		ptr = ptr->next;
	}
	cout << endl;
	cout << "Value:";
	ptr = start;

	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

int main()
{
	int row, col;

	cout<<"Enter number of rows for sparse matrix"<<endl;
	cin>>row;
	cout<<"Enter number of columns for sparse matrix"<<endl;
	cin>>col;

	int sparseMatrix[row][col];

    for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
		    cout<<"Enter the value for["<<i<<"]["<<j<<"]"<<endl;
		    cin>>sparseMatrix[i][j];
		}
	}

	Node *first = NULL;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if (sparseMatrix[i][j] != 0)
            {
				create_new_node(&first, i, j, sparseMatrix[i][j]);
            }
		}
	}
	printList(first);

	return 0;
}
