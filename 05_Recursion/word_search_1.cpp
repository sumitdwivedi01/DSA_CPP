#include <bits/stdc++.h>
using namespace std;

bool dfs(string word , vector<vector<char>>& board , int i , int j , int ind){
    if(ind==word.size()){
        return true;
    }
    if(i<0||j<0|| i>=board.size()||j>=board[0].size()|| board[i][j]!=word[ind]){
        return false;
    }
    char temp = board[i][j];
    board[i][j]='#';
    bool found = dfs(word,board,i+1,j,ind+1)||dfs(word,board,i-1,j,ind+1)||dfs(word,board,i,j+1,ind+1)||dfs(word,board,i,j-1,ind+1);
    board[i][j]=temp;
    return found;
}
 bool check_exist(string word,vector<vector<char>>& board){
    int m=board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(dfs(word,board,i,j,0)){//this will run for every step till you not find first element after finding first element it will continue till the get word 
                
                return true;//dfs returns true when it find the complete word
            }
        }
    }
    return false;
}
void solve(){
    string word;
    cin>>word;
    vector<vector<char>> board = {
    {'A','B','C','E'},
    {'S','F','C','S'},
    {'A','D','E','E'}
    };
    cout << boolalpha << check_exist("ABCCED", board) << endl; // true
    cout << boolalpha << check_exist("SEE", board) << endl;    // true
    cout << boolalpha << check_exist("ABCB", board) << endl;

}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}