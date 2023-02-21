#include<iostream>
using namespace std;

class graph
{
	int array[10][10];
	int direction;
	int vertices;
	public:
		graph();
		void create_matrix();
		void display();	
};

graph::graph()
{
	cout<<"\nHow many vertices do you want in a graph?: ";
	cin>>vertices;
	cout<<"\nEnter direction of graph (0-Undirected, 1-Directed): ";
	cin>>direction;
	int i, j;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			array[i][j]=0;            //Disjoint graph
		}
	}
}

void graph::create_matrix()
{
	int edge_count, from, to;
	if(direction==1)
		edge_count = (vertices*(vertices-1));
	else
		edge_count = (vertices*(vertices-1))/2;
	for(int i=1; i<=edge_count; i++)
	{
		cout<<"\nEnter two vertices to be connected (Enter 0 0 to Quit): "<<endl;
		cout<<"\nFrom vertex= ";            // Source vertex 
		cin>>from;
		cout<<"\nTo vertex= ";              // Destination vertex
		cin>>to;
		if(from==0 || to==0)                // Condition to quit loop
			break;
		if(from<0 || to<0 || from>vertices || to>vertices)
		{
			cout<<"\nGraph not possible!! Invalid Connections";
			i--;
		}
		else
		{
			array[from][to] = 1;
			if(direction==0)
				array[to][from] == 1;
		}
	}
}

void graph::display()
{
	int i, j;
	for(i=1; i<=vertices; i++)
	{
		cout<<"\t";
		for(j=1; j<=vertices; j++)
		{
			cout<<" "<<array[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	graph g;
	g.create_matrix();
	g.display();
	return 0;
}
