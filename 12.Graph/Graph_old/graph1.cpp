#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<list>
#include<queue>
#include<stack>
using namespace std;

template<typename T>   // use for implement generic code(ie, you assume int then automatically 
//                                       assume int data type..)

class Graph{
   public:
   unordered_map<T,list<T>>adjList;   // create adjacency list 

   void addEdge(T u,T v, bool direction){
       // direction = 0 -> undirected graph
       // direction = 1 -> directed graph

       // for u->v
       adjList[u].push_back(v);

       // check v->u..
       if(direction == 0)
          adjList[v].push_back(u);
   }

    // print adjacency matrix..

     void printadj(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
               cout<<j<<", ";
            }
          cout<<endl;
        }
     }

     // Time Complexity --> O(v+e)..
     // worst case --> O(v*2)...

     void bfs(int src,map<int,bool>&visited){

        queue<int>q;
        q.push(src);

        visited[src] = true;

        while(!q.empty()){
            int front = q.front();
            cout<<front<<",";
            q.pop();

            for(auto neighbour : adjList[front]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
     }
    
    // dfs traversal...
    void dfs(int src,map<int,bool>&visited){
        visited[src] = true;
        cout<<src<<" ";

        for(auto neighbour : adjList[src]){
             if(!visited[neighbour]){        // jab visited true na ho..
                dfs(neighbour,visited);
             }
        }
    }
};

int main()
{
    Graph<int>g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.addEdge(2,4,0);
    cout<<"printing the Adjacency List"<<endl;
    g.printadj();

    cout<<"printing the bfs traversal"<<endl;
    int n = 5;

    map<int , bool>visited;
    // to handle graph with disconnected component 
    for(int i=0;i<n;i++)
    {
        if(!visited[i]){
            g.bfs(i,visited);
        }
    }
    

    Graph<int>g2;
    g2.addEdge(0,2,0);
    g2.addEdge(2,3,0);
    g2.addEdge(2,4,0);
    g2.addEdge(3,4,0);
    g2.addEdge(1,3,0);

    cout<<"\nprinting DFS Traversal"<<endl;
    map<int,bool>visited2;
    // to handle graph with disconnected component 
     
    for(int i=0;i<n;i++)
    {
        if(!visited2[i]){
            g2.dfs(i,visited2);
        }
    }
    return 0;
}