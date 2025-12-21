class Solution {
    void merge(vector<int> &arr,int low,int mid,int high){
        vector<int> v;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                v.push_back(arr[left]);
                left++;
            }
            else{
                v.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            v.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            v.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=v[i-low];//since the v will be storing everytime from 0th index that's why we minus low from the indexs so that we can get 0 indexing of the v
        }
        
    }
    
    void msort(vector<int>& arr,int low,int high){
        if(low>=high)return;
        int mid=(high+low)/2;
        msort(arr,low,mid);
        msort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        msort(arr,l,r);
    }
};