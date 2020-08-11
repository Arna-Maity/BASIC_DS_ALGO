// Detecting cycles in an undirected graph.


/*
 *  V: number of vertices
 */
bool isCyclicUtil(int v,vector<int> adj[],bool vis[],int parent)
{
    vis[v]=true;
    vector<int>::iterator it;
    
    for(it=adj[v].begin();it!=adj[v].end();it++)
    {
        if(!vis[*it])
        {
            if(isCyclicUtil(*it,adj,vis,v))
                return true;
        }   
        
        else if(*it != parent)
            return true;
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   bool *vis = new bool[V];
   for(int i=0;i<V;i++)
    vis[i]=false;
    
    for(int u=0;u<V;u++)
    {
        if(!vis[u])
        {
            if(isCyclicUtil(u,adj,vis,-1))
                return true;
        }
    }
 return false;
}