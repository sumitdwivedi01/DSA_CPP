// #include <bits/stdc++.h>
// using namespace std;
// bool is_safe(vector<vector<int>>& maze , int n,int i , int j){
//     if(i<0||j<0||i>n||j>n||maze[i][j]==0||maze[i][j]==-1){
//             return false;
//         }else return true;
// }
// void dfs(vector<vector<int>>& maze , int n,int i , int j,vector<string>& result , string crr){
//         if(i==(n)&&j==(n)){
//             result.push_back(crr);
//             return;
//         }
//         if(i<0||j<0||i>n||j>n||maze[i][j]==0){
//             return;
//         }
//         int temp = maze[i][j];
//         maze[i][j]=-1;
//         if(is_safe(maze,n,i+1,j)){crr.push_back('D');i+=1;}
//         if(is_safe(maze,n,i-1,j)){crr.push_back('U');i-=1;}
//         if(is_safe(maze,n,i,j+1)){crr.push_back('R');j+=1;}
//         if(is_safe(maze,n,i,j-1)){crr.push_back('L');j-=1;}
//         dfs(maze,n,i,j,result,crr);
//         crr.pop_back();
//         maze[i][j]=temp;
        
//     }
// void solve(){

//         vector<vector<int>> maze={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
//         int n=maze.size();
//         vector<string> result;
//         string current;
//         vector<vector<int>> visited(n,vector<int>(n,0));
//         dfs(maze,n,0,0,result,current);
        // for(auto s: result){
        //     for(char ch: s){
        //         cout<<ch;
        //     }
        //     cout<<endl;
        // }

// }

// int main(){
    
//     int t =1;

//     // cin>>t;


//     while(t--){

//         solve();
//     }


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool is_safe(vector<vector<int>>& maze,int n , int i , int j , vector<vector<int>>& visited){
           return(i>=0 && j>=0 && i<n && j<n && maze[i][j]==1 && visited[i][j]==0);
}
void get_path(vector<vector<int>>& maze,int n , int i , int j , vector<vector<int>>& visited , string c , vector<string>& result){
    if(i==n-1 && j==n-1){//condition to check if we reached at the correct point and store the result
        result.push_back(c);
        return;
    }
    //check for the various positions
    //first mark the point as visited in the visited array
    visited[i][j]=1;
    //checking to the down
    if(is_safe(maze,n,i+1,j,visited)){
        get_path(maze,n,i+1,j,visited,c+"D",result);
    }
    if(is_safe(maze,n,i,j-1,visited)){
        get_path(maze,n,i,j-1,visited,c+"L",result);
    }
    if(is_safe(maze,n,i,j+1,visited)){
        get_path(maze,n,i,j+1,visited,c+"R",result);
    }
    if(is_safe(maze,n,i-1,j,visited)){
        get_path(maze,n,i-1,j,visited,c+"U",result);
    }
    visited[i][j]=0;

}
 
void solve(){
        vector<vector<int>> maze={{1, 1, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
        int n=maze.size();
        vector<string> result;
        string current;
        vector<vector<int>> visited(n,vector<int>(n,0));
        if(maze[0][0]==1){
            get_path(maze,n,0,0,visited,current,result);
        }
        for(auto &s: result){
            cout<<s;
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