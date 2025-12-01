#include <bits/stdc++.h>
using namespace std;
 
void get_Paranthesis(int n,int o,int c,string a , vector<string>&result){
    if(a.length()==(2*n)){
        result.push_back(a);
        return;
    }
    if(o==0||o<n){
        get_Paranthesis(n,o+1,c,a+"(",result);
    }
    if(c<o){
        get_Paranthesis(n,o,c+1,a+")",result);
    }
    
}
void solve(){
    int n;
    cin>>n;
    int open=0;
    int close=0;
    string a="";
    vector<string> result;
    get_Paranthesis(n,open,close,a,result);
    for(auto s:result){
        cout<<s<<" ";
    }
    cout<<endl;
        
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}