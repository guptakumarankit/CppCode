#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
  public:
  map<T,list<pair<T,T> >>adjList;   // create adjacency list weighted graph

   void addEdge(T u,T v,T weighted, bool direction){
       // direction = 0 -> undirected graph
       // direction = 1 -> directed graph

       // for u->v
       adjList[u].push_back(make_pair(v,weighted));

       // check v->u..
       if(direction == 0)
          adjList[v].push_back(make_pair(u,weighted));
   }

   // print adjacency list..

      void printadj(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<"),";
            }
            cout<<endl;
        }
      }

// topological sort...

  void Toposort(){
    // step 1:
    map<int,int> indegree;
    queue<int>q;

    // initialse indegree with 0
    for(auto i:adjList){
        indegree[i.first] = 0;
    }

    for(auto i:adjList){
        for(auto j : i.second){
            indegree[j]++;
        }
    }

    // step:2 jitne bhi node ka indegree zero hai usko queue me dala do..
    for(auto i:indegree){
        if(i.second == 0){
            q.push(i.first);
        }
    }

    // ste:3 BFS
    while(!q.empty()){
        int front = q.front();
        cout<<front<<" ";
        q.pop();

        for(auto neighbour : adjList[front]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
   }
/* 
      void SortestpathDirected()
      {

      } */
};

int main()
{
    Graph<int>g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,3,1);
    g.addEdge(1,2,2,1);
    g.addEdge(1,3,6,1);
    g.addEdge(2,3,7,1);
    g.addEdge(2,4,4,1);
    g.addEdge(2,5,2,1);
    g.addEdge(3,4,-1,1);
    g.addEdge(4,5,-2,1);

    cout<<"printing the Adjacency List"<<endl;
    g.printadj();

    cout<<"printing opological sort is:"<<endl;
    g.Toposort();
    return 0;
}