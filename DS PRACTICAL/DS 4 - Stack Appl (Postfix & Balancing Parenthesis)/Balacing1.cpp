#include<iostream>
using namespace std;

class stack{
	int stk[10], top;
	
	public:
		 
		 stack()
		 {
		 	top=-1;
		 }
		 
		 void pop()
		 {
		 	top--;
		 }
		 
		 void push()
		 {
		 	top++;		 	
		 }
		 
		 void print()
		 {
			if(top==-1){
				cout<<"The expression is balanced";
			}
			else{
			cout<<"The Bracket/s is/are missing";
			}
		 }
};


int main()
{
	stack s;
	char ex[20];
	cout<<"Balancing of Parenthesis"<<endl;
	cout<<"Enter the expression: ";
	cin>>ex;
	for(int i=0;ex[i]!='\0';i++)
	{
		if(ex[i]=='(')
		{
			s.push();
		}
		else if(ex[i]==')')
			s.pop();	
	}
	s.print();
}

