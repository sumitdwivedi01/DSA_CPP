#include <bits/stdc++.h>
using namespace std;
 
void get_all_subsequences(int i, vector<int>v ,vector<int>curr, vector<vector<int>> &result){
    if(i>=v.size()){
        result.push_back(curr);
        return;
    }
    curr.push_back(v[i]);
    get_all_subsequences(i+1,v,curr,result);
    curr.pop_back();
    get_all_subsequences(i+1,v,curr,result);
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>current;
    vector<vector<int>> result;
    int index=0;
    get_all_subsequences(index,v,current,result);
    for(auto it:result){
        if(it.empty()){
            cout<<"[]"<<" ";
        }
        else{
            cout<<"[ ";
            for(auto i: it){
                cout<<i<<" ";
            }
            cout<<"]";
        }
        cout<<",";
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