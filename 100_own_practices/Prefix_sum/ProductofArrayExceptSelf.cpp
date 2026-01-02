#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int prefix=1;//calculate prefix
        int suffix=1;//calculate suffix
        for(int i=1;i<n;i++){
            prefix*=nums[i-1];// for i calculate suffix till i-1;
            ans[i]*=prefix;//then multiply it to the ith index
        }
        for(int i=n-2;i>=0;i--){
            suffix*=nums[i+1];//for i calculate suffix till i+1
            ans[i]*=suffix;//then multiply it to the ith index
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