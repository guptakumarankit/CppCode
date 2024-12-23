// Disjoint set (Union-Find)

int find(int parent[],int X)
{
    if(X == parent[X]) return X;
    return parent[X] = find(parent,parent[X]);
}

void unionSet(int parent[],int X,int Z)
{
    int x_parent = find(parent,X);
    int z_parent = find(parent,Z);
    

    if(x_parent != z_parent){
        parent[x_parent] = z_parent;
    }
}

