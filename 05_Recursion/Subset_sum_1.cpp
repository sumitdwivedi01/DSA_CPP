#include <bits/stdc++.h>
using namespace std;
 
void get_subSem(vector<int>& arr,int i, int sum , vector<int>& result){
if(i==arr.size()){
    result.push_back(sum);
    return;
}
sum+=arr[i];
get_subSem(arr,i+1,sum,result);
sum-=arr[i];
get_subSem(arr,i+1,sum,result);
}
void solve(){
vector<int> arr={2,3 , 1,5};
vector<int>result;
get_subSem(arr,0,0,result);
for(auto i: result){
    cout<<i<<" ";
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