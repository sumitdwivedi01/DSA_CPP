#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> result;//storing the final result
        sort(nums.begin(),nums.end());//sort it to get them in correct order
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;//if the current index is same as previous skip it to not inculde same elements and get the same result again and again
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;//skipping the previous value
                int l=j+1;//left index
                int r=n-1;//right index
                while(l<r){
                    long long sum=1LL*nums[i]+nums[j]+nums[l]+nums[r];//1LL* conver to long long to int can't directly convert
                    if(sum==target){//if the target it matched store it and move ahead
                        result.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1])l++;//skipping the same
                        while(l<r && nums[r]==nums[r+1])r--;//skipping the same value
                    }
                    else if(sum<target){// if the sum is lesser change the left to move aheadd
                        l++;
                        while(l<r &&nums[l]==nums[l-1])l++;
                    }
                    else{//if sum is greater than target right -- to get the smaller value as it is already sorted
                        r--;
                        while(l<r &&nums[r]==nums[r+1])r--;
                    }
                }
            }
        }
        return result;
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