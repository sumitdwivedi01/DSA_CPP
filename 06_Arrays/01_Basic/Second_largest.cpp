class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l1=INT_MIN;
        int l2=-1;
        for(int i=0;i<arr.size();i++){
            l1=max(l1,arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==l1)continue;
            l2=max(l2,arr[i]);
        }
        return l2;
    }
};