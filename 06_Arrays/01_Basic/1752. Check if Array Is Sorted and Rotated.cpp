class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for( i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])continue;
            else{
                break;
            }
        }
        if(i==n-1)return true;
        i++;
        for(;i<n-1;i++){
            if(nums[i]<=nums[i+1])continue;
            else return false;
        }
        if(nums[0]<nums[n-1])return false;
        return true;
    }
};