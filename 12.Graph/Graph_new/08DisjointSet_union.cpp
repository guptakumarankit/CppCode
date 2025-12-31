#include <bits/stdc++.h>
using namespace std;

// Disjoint set (Union-Find)

// Find function with path compression
int find(int parent[], int X)
{
    if (X == parent[X]) return X;
    return parent[X] = find(parent, parent[X]);
}

// Union function
void unionSet(int parent[], int X, int Z)
{
    int x_parent = find(parent, X);
    int z_parent = find(parent, Z);

    if (x_parent != z_parent) {
        parent[x_parent] = z_parent;
    }
}

int main() {
    int n, q;
    cout << "Enter number of elements: ";
    cin >> n;
    int parent[n];

    // Initially, each element is its own parent
    for(int i = 0; i < n; i++)
        parent[i] = i;

    cout << "Enter number of union operations: ";
    cin >> q;
    cout << "Enter " << q << " pairs to union (X Z format, 0-indexed):" << endl;
    for(int i = 0; i < q; i++){
        int X, Z;
        cin >> X >> Z;
        unionSet(parent, X, Z);
    }

    cout << "Parent array after unions: ";
    for(int i = 0; i < n; i++)
        cout << find(parent, i) << " "; // path compressed
    cout << endl;

    return 0;
}


// Enter number of elements: 5
// Enter number of union operations: 3
//  input 
// 5 3
// 0 1
// 1 2
// 3 4

// Parent array after unions: 2 2 2 4 4
