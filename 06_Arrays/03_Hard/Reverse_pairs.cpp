#include <bits/stdc++.h>
using namespace std;
#define ll long long
class S {
    void merge(vector<int> & arr, int low , int mid , int high){
        vector<int> v;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]) {
                v.push_back(arr[left]);
                left++;
            }
            else{
                v.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            v.push_back(arr[left++]);
        }
        while(right<=high){
            v.push_back(arr[right++]);
        }
        for(int i=low;i<=high;i++){
            arr[i]=v[i-low];
        }
    }
    int countRev(vector<int>& arr , int low , int mid , int high){
        int cnt=0;
        int right=mid+1;
        int left=low;
        while(left<=mid && right<=high){
            if((long long) arr[left]>(long long) 2*arr[right]){
                cnt+=mid-left+1;
                right++;
            }
            else{
                left++;
            }
        }
        return cnt;
    }

    int mergesort(vector<int> & arr , int low , int high){
        int cnt=0;
        if(low>=high)return cnt;
        int mid=(low+high)/2;
        cnt+=mergesort(arr,low,mid);
        cnt+=mergesort(arr,mid+1,high);
        cnt+=countRev(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};
void solve(){

    vector<int> vn={1,2,56,3,1,6,89,9};
    S ss;
    cout<<ss.reversePairs(vn);

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}