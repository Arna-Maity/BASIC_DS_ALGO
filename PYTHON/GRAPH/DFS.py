graph = [[1,3],[2],[0,3],[]] # Directed Graph

visited = [False for i in graph] # List Comprehension to initialize the visited list to all False.

def DFS(src,graph):
    if(visited[src]):
        return
    visited[src] = True
    print(src)
    neighbours = graph[src]
    for i in neighbours:
        DFS(i,graph)

    
DFS(3,graph)