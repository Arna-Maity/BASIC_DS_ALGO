#include <iostream>
#include <vector>
#include <stack>

#define NODES 20
#define FOR(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

vector<int> adj[NODES];
bool visited[NODES];
int Nodes;
//Functions.
void Initialize(void);
void DFS_Iter(int i);

int main()
{
	int v,w,e;
	int connectComp=0;
	scanf("%d",&Nodes);
	Initialize();
	scanf("%d",&e);

	FOR(i,0,e-1)
	{
	 scanf("%d %d",&v,&w);
	 adj[v].push_back(w);                 // Since graph is undirected.
	 adj[w].push_back(v);
	}

	//Returns the number of connected components.
	FOR(j,0,Nodes-1)
		{
			if(!visited[j])
			{
				DFS_Iter(j);
				++connectComp;
			}
		}

	printf("%d\n",connectComp);
	return 0;
}

void Initialize()
{
	FOR(i,0,Nodes-1)
		visited[i]=false;
}

void DFS_Iter(int i)
{
	stack<int> s;
	s.push(i);
	visited[i]=true;

	while(!s.empty())
	{
		s.pop();
		for(auto j=adj[i].begin();j!=adj[i].end();j++)
		{
			if(!visited[*j])
				{
					s.push(*j);
					visited[*j]=true;
				}
		}
	}
}
