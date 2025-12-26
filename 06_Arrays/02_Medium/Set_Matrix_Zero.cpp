#include <bits/stdc++.h>
using namespace std;

 class S {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //most space optimized approach
        //1 check if the firstrowzero means does first row having any zero
        //2 check if the firstcolzero means does first col having any zero
        //then check the rest of the matrix 
        int m=matrix.size();//row element
        int n=matrix[0].size();
        bool firstRowZero=false;
        bool firstColZero=false;
        //checking for first row zero
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0){
                firstRowZero=true;
                break;
            }
        }

        //checking for first coloumn zero
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                firstColZero=true;
                break;
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;//making the first row element as zero
                    matrix[i][0]=0;//making the first col index as zero
                }
            }
        }

        for(int i=1;i<m;i++){//if the index corresponding 0th row or 0th col is zero making it zero
            for(int j=1;j<n;j++){
                if(matrix[0][j]==0||matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(firstRowZero){//if first row having any zero making the full row as 0
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
        if(firstColZero){//if first col having any zero making the full coloumn as 0
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};
void solve(){

        S ss;
        vector<vector<int>> matrix={{1,2,3,3},{2,5,0,6},{3,6,1,3}};
        
        ss.setZeroes(matrix);

        for(auto it: matrix){
            for(auto i: it){
                cout<<i<<" ";
            }
            cout<<endl;
        }



}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}

