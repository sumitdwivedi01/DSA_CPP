#include <bits/stdc++.h>
using namespace std;
void combination_sum_3(int k , int sum ,int j,  vector<int>& crr , vector<vector<int>>& result ){
    if(sum==0 && crr.size()==k){
        result.push_back(crr);
        return;
    }
    if(sum<=0 || crr.size()>k)return;
    for(int i=j;i<=9;i++){
        if(i<=sum){
            crr.push_back(i);
            combination_sum_3(k,sum-i,i+1,crr,result);
            crr.pop_back();
        }else break;
    }
}
 
void solve(){
    int k;
    int n;
    cin>>k;
    cin>>n;
    vector<int>current;
    vector<vector<int>>result;
    combination_sum_3(k,n,1,current,result);
    for(auto it: result){
        for(auto i : it){
            cout<<i<<" ";
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