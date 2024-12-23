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
   map<T,list<T>>adjList;   // create adjacency list 

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

    // check cyclic using bfs in undirected..
    // time complexity -> O(n)..

    bool isCyclicBfs(int src){
        map<int,bool>visited;   // for visited data structure..
        map<int,int>parent;     // for parent data structure..
        queue<int>q;            // queue data structure..

        q.push(src);
        visited[src] = true; 
        parent[src] = -1;         

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour:adjList[front]){
                if(visited[neighbour] == true && neighbour != parent[front]){
                    return true;
                }
                else if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                }
            }
        }
        return false;
    }

    // Find Cycle in undirected graph using dfs..
    // time complexity -> O[v+e]...

    bool isCyclicDfs(int src,int parent , map<int,bool>&visited){
        visited[src] = true;
        for(auto neighbour : adjList[src]){
            if(!visited[neighbour]){
                bool cycleDetected = isCyclicDfs(neighbour , src , visited);
                if(cycleDetected == true)
                   return true;
            }
            else if(visited[neighbour] == true && neighbour != parent){
                // cycle is present
                return true;
            }
        }
        return false;
    }

    // Detected cycle in directed graph using dfs..
    bool isCycleDfsDirected(int src,map<int,bool>&visited,map<int,bool>&dfsvisited){

        visited[src] = true;
        dfsvisited[src] = true;
        for(auto neighbour : adjList[src]){
            if(!visited[neighbour]){
                bool cycleDetected = isCycleDfsDirected(neighbour,visited,dfsvisited);
                if(cycleDetected == true)
                   return true;
            }
            else if(visited[neighbour] == true && dfsvisited[neighbour] == true){
                // cycle present 
                  return true;
            }
        }
        // backtrack..
        dfsvisited[src] = false;
        return false;
    }


   // topologicl sort ...
   // using kahn algorithm ...
   // time complexity -> O(v+e)..

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

   // topological sort using dfs..
      void toposortdfs(int node,unordered_map<int,bool>&vis,stack<int>&topo){

        vis[node] = true;

        for(auto neighbour:adjList[node]){
            if(!vis[neighbour]){
                toposortdfs(neighbour,vis,topo);
            }
        }
        topo.push(node);

     }
     
   // sortest path in undirected graph using bfs algorithm...(please do this code)
    
     void FindShortestpath(int src,int dest){

      map<int,bool>visited;
      map<int,int>parent;
      queue<int>q;
      q.push(src);
      visited[src] = true;
      parent[src] = -1;

      while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neighbour:adjList[front]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
      }

        // prepare shortest path 
        vector<int>ans;
        int currentnode = dest;
        ans.push_back(currentnode);

        while(currentnode != src){
            currentnode = parent[currentnode];
            ans.push_back(currentnode);
        }
        
        // reverse kar do..
        // reverse(ans.begin(),ans.end());
        // // print 
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        cout<<"Shortest Path is:"<<ans.size()-1<<endl;
   }
};

/* 
int main()
{
    // topological sort using dfs...
    Graph<int>g;

    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,4,1);   
    g.addEdge(3,4,1);   
    g.addEdge(4,5,1);   
    g.addEdge(4,6,1);  
    g.addEdge(5,6,1);   
    
    cout<<"printing adj List"<<endl;
    g.printadj();

    cout<<"printing topological sort is:"<<endl;
    int n = 6;
    
    unordered_map<int,bool>visited;
    stack<int>s;
    for(int i=1;i<n;i++)
    {
        if(!visited[i]){
            g.toposortdfs(i,visited,s);
        }
    }
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
} */



int main(){
    // shortest path undirected graph...

    Graph<int>g;
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(1,4,0);
    g.addEdge(2,5,0); 
    g.addEdge(3,8,1);   
    g.addEdge(4,6,0);
    g.addEdge(5,8,1);  
    g.addEdge(6,7,0);
    g.addEdge(7,8,1);
    
    cout<<"printing adj List"<<endl;
    g.printadj();

    // cout<<"Shortest path is:"<<endl;
    g.FindShortestpath(5,4);
    g.FindShortestpath(7,8);
    g.FindShortestpath(4,8);
    g.FindShortestpath(1,8);
    g.FindShortestpath(3,8);
}



/* 
int main(){
     // topologicl sort ...
   // using kahn algorithm ...
    Graph<int>g;

    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,5,1);   
    g.addEdge(3,5,1);   
    g.addEdge(5,4,1);   
    
    cout<<"printing adj List"<<endl;
    g.printadj();
    
    cout<<"printing opological sort is:"<<endl;
    g.Toposort();
} 
 */

/* 
int main(){
   Graph<int>g;
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(2,4,1);
    g.addEdge(3,7,1);
    g.addEdge(3,8,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(8,7,1);
     
   cout<<"printing the adj list:"<<endl;
    g.printadj();

    map<int,bool>visited;
    map<int,bool>dfsvisited;
    cout<<"Cycle present or not ? "<<g.isCycleDfsDirected(1,visited,dfsvisited);

}
 */

/* 
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
    map<int , bool>visited2;
     // to handle graph with disconnected component 
     
    for(int i=0;i<n;i++)
    {
        if(!visited2[i]){
            g2.dfs(i,visited2);
        }
    }

   // cout<<"loop persent or not ?"<<g.isCyclicBfs(0)<<endl;
 
  // Find cyclic deceted or not using Dfs...

    int parent = -1;
    map<int,bool>visited3;
    
    cout<<"loop present or not ? "<<g.isCyclicDfs(0,parent,visited3);
    return 0;
} */


 

// weighted graph 
/* 
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
};

int main()
{
    Graph<int>g;
    g.addEdge(0,1,3,0);
    g.addEdge(1,2,4,0);
    g.addEdge(1,3,9,0);
    g.addEdge(2,3,8,0);
    g.addEdge(3,4,11,0);
    g.addEdge(2,4,10,0);
    cout<<"printing the Adjacency List"<<endl;
    g.printadj();
    return 0;
}

 */