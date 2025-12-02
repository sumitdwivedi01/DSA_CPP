#include <bits/stdc++.h>
using namespace std;
 
void get_sum(vector<int>& nums , int target,int i , vector<int> &crr , set<vector<int>> & result){
    if(i>=nums.size()){
        if(target==0){
            sort(crr.begin(),crr.end());
            result.insert(crr);
        }
        return;
    }
    if(target>=nums[i]){
        int temp=nums[i];
        crr.push_back(temp);
        target-=temp;
        get_sum(nums,target,i+1,crr,result);
        target+=temp;
        crr.pop_back();
    }
    get_sum(nums,target,i+1,crr,result);

}
void solve(){
    vector<int>nums={2, 1, 2, 7, 6, 1, 5};
    int n=nums.size();
    int target=8;
    vector<int> current;
    set<vector<int>> result;
    get_sum(nums,target,0,current,result);
    for(auto it : result){
        for(auto s: it){
            cout<<s<<" ";
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