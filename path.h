void getAllPathsUtil(vector<struct Node> adj[], struct Node S, int u, int d, bool visited[], struct Node path[], int &path_index)
{
    visited[u] = true;
    path[path_index] = S;
    path_index++;
    if (u == d)
    {
        struct node Y;
        Y.beta = new struct Node[V];
        Y.len = path_index;
        for(int u = 0; u< path_index; u++){
            Y.beta[u] = path[u];
        }
        Y.beta[1];
        alpha->push_back(Y);
    }
    else
    {
        vector<struct Node>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i){
            if (!visited[(*i).st_code])
            {
                getAllPathsUtil(adj, *i, (*i).st_code, d, visited, path, path_index);
            }
        }
    }
    path_index--;
    visited[u] = false;
}
void gapf(vector<struct Node> adj[], int source, int sink)
{
    bool *visited = new bool[V];
    struct Node *path = new struct Node[V];
    int path_index =0;
    struct Node R;
    R.st_code = source;
    R.weight = 0;
    for(int i =0; i< V; i++)
        visited[i] = false;
    getAllPathsUtil(adj, R, source, sink, visited, path, path_index);
}
