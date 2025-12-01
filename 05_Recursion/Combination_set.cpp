#include <bits/stdc++.h>
using namespace std;

void rec( vector<int> &nums , int target , int i , vector<int> &c , vector<vector<int>> &result){
    if(i>=nums.size()){
        if(target==0){
            result.push_back(c);
        }
        return;
    }
    if(target>=nums[i]){//condition for take
        c.push_back(nums[i]);
        target-=nums[i];
        rec(nums,target,i,c,result);
        target+=nums[i];
        c.pop_back();
    }
    rec(nums,target,i+1,c,result);//for not take
        
}
void solve(){
    int n=3;
    vector<int> nums{2,3,4};
    int i=0;
    
    int target;
    cin>>target;
    vector<vector<int>> result;
    vector<int> current;
    rec(nums,target,0,current,result);
    for(auto &it: result){
        for(auto &s: it){
            cout<<s<<' ';
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