#include <bits/stdc++.h>
using namespace std;
//better solution still time limit exceed n^2 log n
//  class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> st;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             set<int> hash;
//             for(int j=i+1;j<n;j++){
//                 int third = -(nums[i]+nums[j]);
//                 if(hash.find(third)!=hash.end()){
//                     vector<int> temp = {nums[i],nums[j],third};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hash.insert(nums[j]);
//             }
//         }
//         return vector<vector<int>>(st.begin(),st.end());
//     }
// };
//most optimal solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       //sorting the array
       sort(nums.begin(),nums.end());
       int n=nums.size();
       vector<vector<int>> ans;
       for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;

            int left=i+1;
            int right=n-1;

            while(left<right){
                int sum=(nums[left]+nums[right]+nums[i]);
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])left++;//if next element is same as the current so skip it because it will give you the same values again
                    while(left<right && nums[right]==nums[right+1])right--;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    left++;
                }
            }
       } 
       return ans;
    }
};
void solve(){

        





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}