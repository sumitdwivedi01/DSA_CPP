#include <bits/stdc++.h>
using namespace std;
 //time complexity : O(2^n * K)
 //space complexity:O()
void get_sum(vector<int>& nums , int target,int i , vector<int> &crr , vector<vector<int>> & result){
    if(target==0){
        result.push_back(crr);
        return;
    }
    for(int j=i;j<nums.size();j++){
        if(j>i && nums[j]==nums[j-1])continue;
        if(nums[j]>target)break;

        crr.push_back(nums[j]);
        get_sum(nums,target-nums[j],j+1,crr,result);

        crr.pop_back();
    }

}
// void get_sum(vector<int>& nums , int target,int i , vector<int> &crr , vector<vector<int>> & result){
//     if(i>=nums.size()){
//         if(target==0){
//             for(auto it:result){
//                 if(it==crr)return;
//             }
//             result.push_back(crr);
//         }
//         return;
//     }
//     if(target>=nums[i]){
//         int temp=nums[i];
//         crr.push_back(temp);
//         target-=temp;
//         get_sum(nums,target,i+1,crr,result);
//         target+=temp;
//         crr.pop_back();
//     }
//     get_sum(nums,target,i+1,crr,result);

// }
void solve(){
    vector<int>nums={1,2,1,2,4,3};
    int n=nums.size();
    int target=7;
    sort(nums.begin(),nums.end());
    vector<int> current;
    vector<vector<int>> result;
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