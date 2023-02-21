#include<iostream>
#include <list>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int s);
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}
void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
int main()
{
    int vt,e,u,v,start;
    	cout<<"Implementation of Breadth First Traversal"<<endl;
    cout<<"Enter number of vertices"<<endl;
	cin>>vt;
	Graph g(vt);
    cout<<"Enter number of edges"<<endl;
	cin>>e;
	for(int i=0;i<e;i++)
	{
		cout<<"Enter from"<<endl;
		cin>>u;
		cout<<"Enter To"<<endl;
		cin>>v;
		g.addEdge(u,v);
	}
	cout<<"Enter start vertex"<<endl;
	cin>>start;
	cout<<"Breadth First traversal of the Graph is "<<endl;
	g.BFS(start);
	return 0;
}

