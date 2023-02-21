#include<iostream>
using namespace std;

#define ROW 7
#define COL 7
#define infinity 9999

class prims
{
	int graph[ROW][COL], nodes;
	public:
		prims();
		void createGraph();
		void primsAlgo();	
};            

prims::prims()
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			graph[i][j]=0;
		}
	}
}

void prims::createGraph()
{
	int i, j;
	cout<<"Enter total nodes: ";
	cin>>nodes;
	cout<<"\n\nEnter adjacency matrix: ";
	for(i=0; i<nodes; i++)
	{
		for(j=0; j<nodes; j++)
		{
			cin>>graph[i][j];
		}
	}
	for(i=0; i<nodes; i++)          // Assign infinity to all graph[i][j] where weight is 0
	{
		for(j=0; j<nodes; j++)
		{
			if(graph[i][j]==0)
			{
				graph[i][j] = infinity;
			}
		}
	}
	cout<<"Matrix is: "<<endl;      // Printing graph in matrix form
	for(i=0; i<nodes; i++)           
	{
		for(j=0; j<nodes; j++)
		{
			cout<<" "<<graph[i][j];
			if((j+1)%nodes==0)
				cout<<endl;
		}
	}
}

void prims::primsAlgo()
{
	cout<<"Minimum spanning tree is: ";
	int selected[ROW], i, j, ne, min, x, y;
	for(i=0; i<nodes; i++)
		selected[i]=false;
	selected[0]=true;
	ne=0;
	while(ne<nodes-1)
	{
		min=infinity;
		for(i=0; i<nodes; i++)
		{
			if(selected[i]==true)
			{
				for(j=0; j<nodes; j++)
				{
					if(selected[j]==false)
					{
						if(min>graph[i][j])
						{
							min = graph[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
		}
		selected[y]=true;
		cout<<"\n"<<x+1<<"--> "<<y+1;
		ne=ne+1;
	}
}

int main()
{
	prims MST;
	cout<<"\nPrims Algorithm to find Minimum Spanning Tree\n";
	MST.createGraph();
	MST.primsAlgo();
	return 0;
}

