#include <iostream>
#include <stack>
#include <list>

using namespace std;

class Graph
{
	int V;
	list<int> *adj;

	void topSortUtil(int v,bool vis[],stack<int> &s);

	public:
		Graph(int v);
		void addEdge(int v,int w);
		void topSort(void);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::topSortUtil(int v,bool vis[],stack<int> &s)
{
	vis[v] = true;
	list<int>::iterator itr;

	for(itr = adj[v].begin();itr != adj[v].end();itr++)
		if(!vis[*itr])
			topSortUtil(*itr,vis,s);

	s.push(v);
}

void Graph::topSort()
{
	stack<int> s;
	bool *vis = new bool[V];
	for(int i=0;i<V;i++)
		vis[i]=false;

	for(int j=0;j<V;j++)
		if(!vis[j])
			topSortUtil(j,vis,s);

	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
		}
}

int main()
{
	Graph g(6);
	g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1);
	
	cout << "Following is a Topological Sort of the given graph \n"; 
    g.topSort(); 
  
    return 0; 
}

