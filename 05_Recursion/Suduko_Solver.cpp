#include <bits/stdc++.h>
using namespace std;
bool is_safe(vector<vector<char>> &board ,int row , int col,int value){
    for(int i=0;i<9;i++){//check each row if the value is already existing or not
        if(board[row][i]==value)return false;
    }

    for(int i=0;i<9;i++){//check each coloumn if value previously exist
        if(board[i][col]==value)return false;
    }
    int row_start = 3*(row/3);//gives the box starting element like if i=2 so it will exist in 0-3 block cause 3*(2/3) =0
    int col_start = 3*(col/3);//same if col =7 this will exist in 6-8 block so 3*(7/3) gives the 6 now check for 6 to 8

    for(int i=row_start;i<row_start+3;i++){
        for(int j=col_start;j<col_start+3;j++){
            if(board[i][j]==value)return false;
        }
    }
    return true;

}
 
bool solve_suduko(vector<vector<char>> &board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){//for each single block checking for the each value from 1 to 9 if can be used or not
                    if(is_safe(board,i,j,c)){
                        board[i][j]=c;
                        if(solve_suduko(board))return true;
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solve(){
vector<vector<char>> board {
    { '1', '.', '.', '.', '.', '7', '.', '9', '.' },
    { '.', '3', '.', '.', '2', '.', '.', '.', '8' },
    { '.', '.', '9', '6', '.', '.', '5', '.', '.' },
    { '.', '.', '5', '3', '.', '.', '.', '9', '.' },
    { '.', '1', '.', '.', '8', '.', '.', '.', '2' },
    { '6', '.', '.', '.', '.', '4', '.', '.', '.' },
    { '3', '.', '.', '.', '.', '.', '.', '1', '.' }, 
    { '.', '4', '.', '.', '.', '.', '.', '.', '7' },
    { '.', '.', '7', '.', '.', '.', '3', '.', '.' }
};
solve_suduko(board);
for(auto it : board){
    for(auto c:it){
        cout<<c<<" ";
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