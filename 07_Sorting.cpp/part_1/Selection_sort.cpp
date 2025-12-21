class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int mini=INT_MAX;
        int x=-1;
        for(int i=0;i<arr.size();i++){
            mini=arr[i];
            x=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<mini){
                    mini=arr[j];
                    x=j;
                }
            }
                swap(arr[i],arr[x]);
        }
    }
};