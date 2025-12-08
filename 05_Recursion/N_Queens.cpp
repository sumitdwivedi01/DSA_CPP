#include <bits/stdc++.h>
using namespace std;
 
bool is_safe(int n , vector<vector<char>>& board , int row , int col ){
    //check to the left if any queen already exist in same row --->[]
    for(int i=0;i<col;i++){
        if(board[row][i]=='Q')return false;
    }
    //check upper left side
    int i=row;
    int j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q')return false;
        i--;
        j--;
    }
    // checking for the bottom left 
    i=row;
    j=col;
    while (i<n&&j>=0)
    {
        if(board[i][j]=='Q')return false;
        i++;
        j--;    
    }
    return true;
    
}
void get_solution(int n,vector<vector<char>>& board ,int col , vector<vector<string>> &result ){

        if(col==n){//base case means if we have filled the each column with atlease one queen
            vector<string> temp;
            for(int i=0;i<n;i++){
                string row (board[i].begin(),board[i].end());
                temp.push_back(row);
            }
            result.push_back(temp);
            return;
        }
        for(int row=0;row<n;row++){
            if(is_safe(n,board,row,col)){
                board[row][col]='Q';//if it is safe to place queen put the queen
                get_solution(n,board,col+1,result);
                board[row][col]='*';//remove old queen for backtracking
            }
        }
}
void solve(){
    int n;
    cin>>n;
    vector<vector<char>> board (n,vector<char>(n,'*'));
    vector<vector<string>>result;
    get_solution(n,board,0,result);
    for(auto it:result){
        for(auto s: it){
            for(int i=0;i<s.length();i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}