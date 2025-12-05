#include <bits/stdc++.h>
using namespace std;
 
void backtrack(int i, vector<int>& nums, vector<int>& subset, vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        backtrack(i + 1, nums, subset, res);
        subset.pop_back();

        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        backtrack(i + 1, nums, subset, res);
    } 
void get_subsets(vector<int>&arr,int index,vector<int>&crr,vector<vector<int>>&result){
        result.push_back(crr);//since each step is a subset it self and is unique so we are storing each point to the result because no value repeats itself and just give the subset
    for(int i=index;i<arr.size();i++){
        if(i>index&&arr[i]==arr[i-1])continue;
        crr.push_back(arr[i]);
        get_subsets(arr,i+1,crr,result);
        crr.pop_back();
    }

}
void solve(){
    vector<int>arr={1,2,2};
    vector<int>current;
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    get_subsets(arr,0,current,result);
    // backtrack(0,arr,current,result);
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