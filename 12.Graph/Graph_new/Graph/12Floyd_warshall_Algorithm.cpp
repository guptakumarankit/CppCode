/*  Floyd Warshall
It is used to find the shortest paths between all pairs of 
nodes in a weighted graph. This algorithm is highly efficient 
and can handle graphs with both positive and negative edge 
weights, making it a versatile tool for solving a wide range 
of network and connectivity problems. 

   Time Complexity -> O(n^3).
   Space Complexity -> O(n).
*/

// User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
         
         // step-1 initilize matrix value is negative then intilize will be infinity.
         int n = matrix.size();

         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 10000000;
                }
            }
         }
         
         // Step-2 find minimum distance 
         for(int via = 0; via < n; via++){
             for(int i=0;i<n;i++){
                 for(int j=0;j<n;j++){
                     matrix[i][j] = min(matrix[i][j] , matrix[i][via] + matrix[via][j]);
                 }
             }
         }
            	
         // after update value negative value is replace by -1.
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 if(matrix[i][j] == 10000){
                     matrix[i][j] = -1;
                 }
             }
         }
	}
};
