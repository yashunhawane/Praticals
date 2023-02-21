#include <bits/stdc++.h>
	using namespace std;
	bool areBracketsBalanced(string expr)
	{
		stack<char> temp;
		for (int i = 0; i < expr.length(); i++) {
			if (temp.empty()) {
				temp.push(expr[i]);
			}
			else if ((temp.top() == '(' && expr[i] == ')')
					|| (temp.top() == '{' && expr[i] == '}')
					|| (temp.top() == '[' && expr[i] == ']')) {
				temp.pop();
			}
			else {
				temp.push(expr[i]);
			}
		}
		if (temp.empty()) {
			return true;
		}
		return false;
	}
	
	int main()
	{
		cout<<"Balancing Paranthesis Performed"<<endl;
		string expr = "[]{}()";              // "[]{}()" - Balanced, "[(])"- Not Balanced
	 
		if (areBracketsBalanced(expr))
			cout <<"\n THIS IS BALANCED";
		else
			cout << "THIS IS NOT BALANCED";
		return 0;
	}

