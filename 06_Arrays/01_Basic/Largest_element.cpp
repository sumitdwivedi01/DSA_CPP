class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
        }
        return maxx;
    }
};