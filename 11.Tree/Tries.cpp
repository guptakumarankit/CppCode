#include<bits/stdc++.h>
#include<vector>
using namespace std;

class TrieNode{
     public:
     char data;
     TrieNode* children[26];
     bool isTerminal;

     // constructor.....
     TrieNode(char d){
          this->data = d;
          for(int i=0;i<26;i++){
               children[i] = NULL;
          }
          this->isTerminal = false;
     }
};

void insertword(TrieNode* root,string word){
     // Base Case
     // cout<<word<<endl;
     if(word.length() == 0){
          root->isTerminal = true;
          return;
     }

     char ch = word[0];
     int index = ch - 'a';
     TrieNode* child;

     // present
     if(root->children[index] != NULL){
          child = root->children[index];
     }
     else{
          // not present
          child = new TrieNode(ch);
          root->children[index] = child;
     }
     insertword(child,word.substr(1));
}

bool searchword(TrieNode* root,string word){
      
     if(word.length() == 0){
          return root->isTerminal;
     }

     char ch = word[0];
     int index = ch - 'a';
     TrieNode* child;

     // present
     if(root->children[index] != NULL){
         child = root->children[index];
     }
     else{
         return false;
     }
     return searchword(child,word.substr(1));
}

void deleteword(TrieNode* root,string word){
    
     if(word.length() == 0){
          root->isTerminal = false;
          return;
     }

     char ch = word[0];
     int index = ch - 'a';
     TrieNode* child;

     if(root->children[index] != NULL){
          child = root->children[index];
     }
     deleteword(child,word.substr(1));
}

// creation of TrieNode..
// int main(){

//     TrieNode* root = new TrieNode('/');

//     // insert element....
//     insertword(root,"coding");
//     insertword(root,"code");
//     insertword(root,"coder");
//     insertword(root,"codehelp");
//     insertword(root,"baba");
//     insertword(root,"baby");
//     insertword(root,"babu");
//     insertword(root,"shona");

//     // Delete element
//     deleteword(root,"coding");

//      // Searching...
//      if(searchword(root,"cod") == true){
//         cout<<"present"<<endl;
//      }
//      else{
//        cout<<"absent"<<endl;
//      }
//     return 0;
// }

//[ print all suggestion when you type the char or sting... just like google]
/*
   Time Complexity -> O(N*M^2)....
   Space Complexity -> O(N*M)....
   where N -> Denote the size of the input string 
   and M -> denote the number of string in trie.
*/

void storeSuggestion(TrieNode* curr,vector<string>&temp,string& prefix){
     
     // agar current null ho to.
     if(curr->isTerminal){
          temp.push_back(prefix);
     }

     // a to z tak choices dedo matlab curr node ke baad jitna bhi terminal node hai sabko print kara do. 
     for(char ch='a';ch<='z';ch++){
          int index = ch - 'a';
          TrieNode* next = curr->children[index];
          if(next != NULL){
              // is child exists...
              prefix.push_back(ch);
              storeSuggestion(next,temp,prefix);
              prefix.pop_back();
          }
     }
}

vector<vector<string>>getSuggestions(TrieNode* root,string input){
       
     TrieNode* prev = root;
     vector<vector<string>>output;
     string prefix = "";
     string currInput = "";
     for(int i=0;i<input.size();i++){
          char lastch = input[i];

          int index = lastch - 'a';
          TrieNode* curr = prev->children[index];

          // current input update kar do..
          currInput.push_back(lastch);

          // char hi nhi hai then simple break kar do...
          if(curr == NULL)
             break;
          else{
             // agar mil jaye to pura suggestion print kara do..
             vector<string>temp;
             temp.push_back(currInput);
             temp.push_back("->");

             prefix.push_back(lastch);
             storeSuggestion(curr,temp,prefix);
             output.push_back(temp);

             prev = curr;
          }
     }
     return output;
}
int main(){

     vector<string>s;
     s.push_back("love");
     s.push_back("lover");
     s.push_back("loving");
     s.push_back("last");
     s.push_back("lost");
     s.push_back("lane");
     s.push_back("lord");

     string input = "lovi";
     
     // insert all the word in trie...
     TrieNode* root = new TrieNode('/');
     for(int i=0;i<s.size();i++){
          insertword(root,s[i]);
     }

     vector<vector<string>>ans = getSuggestions(root,input);

     cout<<"Printing the answer:"<<endl;

     for(int i=0;i<ans.size();i++){
          for(int j=0;j<ans[i].size();j++){
               cout<<ans[i][j]<<" ";
          }
          cout<<endl;
     }

     return 0;
}