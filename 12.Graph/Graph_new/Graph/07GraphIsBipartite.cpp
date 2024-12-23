// Bipartite Graph

/* Approach - 1
    using DFS
    Time Complexity -> O(V).
    Space Complexity -> O(V). where v = number of vertices.
*/

class Solution {
public:

    bool DFS(vector<vector<int>>& graph,int curr,vector<int>&color,int currcolor){
        
        if(color[curr] == -1)
            color[curr] = currcolor;

        // Go to the Adjacent node..
        for(auto &v : graph[curr]){
            
            if(color[v] == -1){      // no node to color
                int colorOfV = 1 - currcolor;  //  no adjacent color are equal. 
                if(DFS(graph,v,color,colorOfV) == false)
                   return false;
            }
            else if(color[v] == color[curr]){
                return false;
            }
               
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        
        vector<int>color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i] == -1){
                if(DFS(graph,i,color,1) == false){
                     return false;
                }
            }
        }
        return true;
    }
};

/* Approach - 2
    using BFS
*/

class Solution {
public:
    bool checkBipartiteBFS(vector<vector<int>>&graph,int curr,vector<int>&color){
        queue<int>q;
        q.push(curr);
        color[curr] = 1;
        
        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(auto &v: graph[u]){
                if(color[v] == -1){
                    color[v] = 1 - color[u];
                    q.push(v);
                }
                else if(color[v] == color[u]){
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int>color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i] == -1){
                if(checkBipartiteBFS(graph,i,color) == false){
                    return false;
                }
            }
        }
        return true;
    }
};