#include <iostream>
using namespace std;
class Term
{	
public:
    int row, column, value;
    Term *next;
    Term(int row, int column, int value, Term *next = NULL)
    {
        this->row = row;
        this->column = column;
        this->value = value;
        if (next != NULL)
        {
            this->next = next;
        }
    }
};
class SparseMatrix
{
public:
    Term *head;
    int row, column;
    SparseMatrix(int row, int column)
    {
        this->row = row;
        this->column = column;
        head = NULL;
    }
    void addTerm(int row, int column, int value)
    {
        if (head == NULL)
        {
            head = new Term(row, column, value);
        }
        else
        {
            Term *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Term(row, column, value);
        }
    }
    void print()
    {
        Term *temp = head;
        for (int i = 1; i <= column; i++)
        {
            for (int j = 1; j <= row; j++)
            {
                if (temp == NULL)
                {
                    cout << "0 ";
                    continue;
                }
                if (temp->row == i && temp->column == j)
                {
                    cout << temp->value << " ";
                    temp = temp->next;
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};


int main()
{
    cout << "Sparse Matrix" << endl;
    cout << "Enter number of rows: ";
    int row;
    cin >> row;
    cout << "Enter number of columns: ";
    int column;
    cin >> column;
    SparseMatrix s = SparseMatrix(row, column);
    cout << "Enter number of terms: ";
    int terms;
    cin >> terms;
    for (int i = 0; i < terms; i++)
    {
        cout << "Enter row: ";
        int row;
        cin >> row;
        cout << "Enter column: ";
        int column;
        cin >> column;
        cout << "Enter value: ";
        int value;
        cin >> value;
        s.addTerm(row, column, value);
    }
    s.print();
    return 0;
}

