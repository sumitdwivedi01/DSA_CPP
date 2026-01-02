//link : https://leetcode.com/problems/minimum-size-subarray-sum/description/?envType=problem-list-v2&envId=prefix-sum
//209 leetcode

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mlen=INT_MAX;
        int l=0;//left
        int r=0;//right
        int sum=0;
        int n=nums.size();
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>=target){
                if((r-l+1)<mlen){
                    mlen=r-l+1;
                }
                sum-=nums[l];//remove 1st element to get new subarray
                l++;
            }
        }
        if(mlen==INT_MAX){
            return 0;
        }
        return mlen;
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