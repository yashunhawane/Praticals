#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void addEdge(int u,int v,vector<int>* V)
{
	V[u].push_back(v);
}
void DFS(int s,vector<int>* adj,int n)
{
    int visited[n+1]={0};
    stack<int> stack;
    stack.push(s);
    vector<int>::iterator i;
    while (!stack.empty())
    {
        s = stack.top();
        stack.pop();

        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
}
int main()
{
	int n,e,u,v,start;
	cout<<"Implementation of Depth First Traversal"<<endl;
	cout<<"Enter no of vertices"<<endl;
	cin>>n;
	cout<<"Enter no of Edges"<<endl;
	cin>>e;
	int copy=n;
	vector<int> V[n+1];
	for(int i=0;i<e;i++)
	{
		cout<<"Enter from"<<endl;
		cin>>u;
		cout<<"Enter To"<<endl;
		cin>>v;
		addEdge(u,v,V);
	}
	cout<<"Graph Representation using Adjacency List is"<<endl;
	vector<int>::iterator it;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"->";
		for(it=V[i].begin();it!=V[i].end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter start vertex"<<endl;
	cin>>start;
	cout<<"Depth First traversal of the Graph is ";
	DFS(start,V,n);
	return 0;
}

