#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<limits.h>
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

     void dfs(int node,unordered_map<int,bool>&vis,stack<int>&topo){

        vis[node] = true;

        for(auto neighbour:adjList[node]){
            if(!vis[neighbour.first]){
                dfs(neighbour.first,vis,topo);
            }
        }
        topo.push(node);
     }

    // shortest path..
    void getShortestpath(int src , vector<int>&dist,stack<int>&topo){

        dist[src] = 0;
        while(!topo.empty()){
            int top = topo.top();
            topo.pop();
        
            if(dist[top] != INT_MAX){
                for(auto i:adjList[top]){
                    if(dist[top]+i.second < dist[i.first]){
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }
        }
    }
    
  // Dijkstra algorithm..
  // T.C ->(eloge)..

  /* 
     Ques - Why we use set data structure ?
     ans :- top of the set always get the minimum distance node,and 
     when we find the distance but already present distance int 
     that index and that distance is greater than current distance then 
     we easily delete the previous distance thay why we use set data structure 
     in priority queue we can't do this operation.
   */

    vector<int>dijkstra(int src,int n){
        vector<int>dist(n,INT_MAX);

        // Distance node name
        set<pair<int,int>>st;

        // intitial step:                                  
        dist[src] = 0;                  // In Dijkstra algorithm in set(first distance,second node).
                                        // but in adjList (first node, second weight).
        st.insert(make_pair(0,src));

        while(!st.empty()){
            // step:1 Get the top element..
            auto top = *(st.begin());
            // pop
            st.erase(st.begin());

            int nodeDistance = top.first;
            int node = top.second;

            // step:2->explore  neigbhour..
            
            for(auto neighbour : adjList[node]){
                // neighbour.first -> neighbour ka name...
                // neighbour.second ->neighbour ka weight..
                if(nodeDistance + neighbour.second < dist[neighbour.first]){

                    // remove old record..(1st way)
                    // auto record = st.find(make_pair(dist[neighbour.first],neighbour.first));
                    
                    // // if record is found, than erase it..
                    // if(record != st.end()){
                    //     st.erase(record);
                    // }

                    // delete pair in set.(2nd way)
                    if(dist[neighbour.first] != INT_MAX){
                        st.erase({dist[neighbour.first],neighbour.first});
                    }

                    // dist update..
                    dist[neighbour.first] = nodeDistance + neighbour.second;
                   
                    // push new record
                    st.insert(make_pair(dist[neighbour.first],neighbour.first));
                }
            }
        }
        return dist;
    }
};

// int main(){
//     Graph<int>g;
//     g.addEdge(0,1,5,0);
//     g.addEdge(0,2,8,0);
//     g.addEdge(1,2,9,0);
//     g.addEdge(1,3,2,0);
//     g.addEdge(2,3,6,0);

//     cout<<"printing the Adjacency List"<<endl;
//     g.printadj();

//     vector<int>ans = g.dijkstra(0,4);

//     for(auto i: ans){
//         cout<<i<<" ";
//     }cout<<endl;
// }
 
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

    cout<<"printing topological sort is:"<<endl;
    int n =6;
    
    unordered_map<int,bool>visited;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    }

   int src = 1;
   vector<int>dist(n);

   for(int i=0;i<n;i++)
   {
     dist[i] = INT_MAX; 
   }
   g.getShortestpath(src,dist,s);
   
   cout<<"answer is:"<<endl;
   for(int i=0;i<dist.size();i++){
    cout<<dist[i]<<" ";
   }cout<<endl;

return 0;

} 
