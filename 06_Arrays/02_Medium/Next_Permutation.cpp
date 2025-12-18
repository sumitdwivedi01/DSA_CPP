class Solution {
public:
    void nextPermutation(vector<int>& arr) {
    int n=arr.size();
    int l=-1;
    int r=-1;
    for(int i=n-1;i>0;i--){//we should check the breaking point from the last as it can have multiple from start but to achieve the longest perfect match we should take it from the last
        if(arr[i-1]<arr[i]){
            //break point
            l=i-1;
            r=i;
            break;
        }
    }
    if(l==-1 && r==-1){
        sort(arr.begin(),arr.end());
        return;
    }
    int val=arr[r]-arr[l];
    int j=r;
    //finding the next minimum possible
    for(int i=r;i<n;i++){
        int diff = arr[i]-arr[l];
        if(diff< val && diff>0){
            j=i;
            val=diff;
        }
    }
    swap(arr[l],arr[j]);
    sort(arr.begin()+r,arr.end());
    }
};